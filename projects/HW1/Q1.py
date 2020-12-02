import numpy as np
import copy
import matplotlib.pyplot as plt
import random

#********Car as the list of vector of motion *****
#******** To north [ 1, 0] ***********
#******** To south [-1, 0] ***********
#******** To east  [ 0, 1] ***********
#******** To west  [ 0,-1] ***********

#***********User block********************
n_car=4   #total number of cars
car0=range(n_car)
car0[0]=[0,1]
car0[1]=[0,-1]
car0[2]=[1,0]
car0[3]=[-1,0]

standard=[ -1,0]  #westward car go first
right_driving=True  #set to True if user is driving on the rightside
#***********User block****** **************

def angle(vector_1,vector_2): #Return the angle of two vectors from vector1 to vector2
    unit_vector_1 = vector_1 / np.linalg.norm(vector_1)
    unit_vector_2 = vector_2 / np.linalg.norm(vector_2)
    dot_product = np.dot(unit_vector_1, unit_vector_2)
    if np.cross(unit_vector_1, unit_vector_2)==0:
        sign=1.
    else:
        sign = np.cross(unit_vector_1, unit_vector_2)/abs(np.cross(unit_vector_1, unit_vector_2))
    angle = sign*np.arccos(dot_product)          #in rad 
    if angle<0:
        angle=2.*np.pi+angle
    return angle

def angle_list_calc(standard, car):  #Find the west going car as the starting car
    angle_list=[]
    for i in range(len(car)):
        angle_list.append(angle(car[i],standard) )
    return angle_list

def next_car_calc(car, car_order): #Determine the next car to go
    car_last=car[car_order[-1]]  #last car that moved
    car_list=range(len(car))     #order of the car to keep track of 
    car_list_origin=range(len(car))     #order of the car to keep track of
    car_temp=copy.deepcopy(car)

    for i in car_order:
        car_temp.remove(car[i])
        car_list.remove(car_list_origin[i])
    angle_list=angle_list_calc(car_last, car_temp)
    next_car=car_list[np.argmin(angle_list)]
    return next_car
    #np.cross()

def order(standard,car): #calculate the order of the car based on direction of motion
    car_order=[]
    car.append(standard)
    car_order.append(len(car)-1)
    '''
    angle_list=angle_list_calc(standard, car)
    print(angle_list)
    index_standard_car=np.argmin(angle_list)
    car_order.append(index_standard_car)
    '''

    for i in range(len(car)-1):
        print("Carrrrr:"+str(car))
        next_car=next_car_calc(car, car_order)
        car_order.append(next_car)
        print("Car order: "+str(car_order))
    car=car[:-1]
    car_order=car_order[1:]

    plt.clf()
    plt.ylabel(r'$North$',fontsize=10)
    plt.xlabel(r'$East$',fontsize=10)
    
    number_of_colors = len(car)
    color0 = ["#"+''.join([random.choice('0123456789ABCDEF') for j in range(6)])
             for i in range(number_of_colors)]
    
    for i in range(len(car_order)):
        plt.quiver([0], [0], [car[car_order[i]][0]], [car[car_order[i]][1]],label="car#"+str(i),color=color0[i])
    plt.title('Order of passing cars',fontsize=10)
    plt.legend()
    plt.show()

    return car_order
car_order=order(standard,car0)
print(car_order)