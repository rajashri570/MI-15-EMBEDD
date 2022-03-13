import math

# 2. Python Program to find Square root of number
#without sqrt() method....
''' num = int(input("Enter number to find square root : "))

if num < 0:
    print("Please number should be greater or equal to 0")

else:
    sq_root = num ** 0.5


    print("Square root of {} is : {}".format(num,sq_root)) '''

#with sqrt() method....

num1 = int(input("Enter number to find square root : "))

if num1 < 0:
    
    print("Please number should be greater or equal to 0")

else:

    print("Square root of {} is : {} ".format(num1, math.sqrt(num1)))
