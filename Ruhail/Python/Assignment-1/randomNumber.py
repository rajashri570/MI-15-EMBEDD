
 # 5. Python Program to genrate random number
import random

print("Random floating Numbers between 0 to 1\n")
ran = random.random()    #it is print float number between 0 to 1 randomly....  
print(ran)
print("-----------------------------------------\n")
print("Generating Random Numbers between 0 to 10")
ran = random.randint(0, 10) #it provide random number in between specified length suppose we give 0 ,10 it is print under 10 number randomly
print(ran)
print("-----------------------------------------\n")

# We can also generate random list using for loop with the help of randint() method 
print("Genarating random element in the list given specified element and range")
random_list = []        #create empty list

for i in range(0, 5):   #apply for loop here 0, 5 is range, we can print only 5 element in the list 

    n = random.randint(1, 50)   #it will print only 5 element in the list between 1 to 50 randomly

    random_list.append(n)     #with the help of append method we can add all that element in the list

print(random_list)  #print random 5 element in the list
print("-----------------------------------------\n")
