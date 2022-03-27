# Program 1 : Write a Python program to add two positive integers without using the '+' operator using function.

def add(num1, num2):
    
    while(num2 != 0):
        
        count = num1 & num2
        
        num1 = num1 ^ num2
        
        num2 = count << 1
        
    return num1
    
num1 = int(input("Enter First Number : "))
num2 = int(input("Enter Second Number : "))

res = add(num1, num2)

print(res)
