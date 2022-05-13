# Program 1 : Write a Python program to calculate body mass index using function.

def bodyMass(height, weight):   #function with return value


    body_mass = round(weight / (height * height), 2)    #calculate body of mass index
    return body_mass
    
height = float(input("Enter Your Height in feet  : "))
weight = float(input("Enter Your weight in kg    : "))

res = bodyMass(height, weight)  #pass value throw function using user input

print(res)
    
