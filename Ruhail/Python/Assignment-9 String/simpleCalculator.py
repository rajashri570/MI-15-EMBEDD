''' Program 1. Write following programs :
        Create a simple calculator in python.
        Take choice from user...
        Create menu wise choices
        1. Addition
        2. Substraction
        3. Modulus
        4. Division
        5. Multiplication
        6. Exponent
        Use function as well"
 '''
 
from operator import truediv


def add(x, y):      #addition function
     return x + y
 
def sub(x, y):      #subtraction function
    return x - y

def mul(x, y):      #multiplication function
    return x * y

def modu(x, y):     #Mudulas function
    return x / y

def div(x, y):      #Division Function
    return x % y

def expo(x, y):     #Exponent function
    return pow(x, y)

print("Select Your Choice : ")
print("1. Addition      : ")
print("2. Subtraction   : ")
print("3. Multiplication: ")
print("4. Mudule        : ")
print("5. Divison       : ")
print("6. Exponent      : ")

while True: #whole process repeated untill user choice no
    
    Choice = input("Enter Your Choice : ")
    
    if Choice in ('1', '2', '3', '4', '5', '6'):
        
        num1 = float(input("Enter First Number      : "))
        num2 = float(input("Enter Second Number     : "))
        
        if Choice == '1':
            
            print(num1, "+", num2, "=", add(num1, num2))
            
        if Choice == '2':
            
            print(num1, "-", num2, "=", sub(num1, num2))
            
        if Choice == '3':
            
            print(num1, "*", num2, "=", mul(num1, num2))
            
        if Choice == '4':
            
            print(num1, "%", num2, "=", modu(num1, num2))
            
        if Choice == '5':
            
            print(num1, "/", num2, "=", div(num1, num2))
            
        if Choice == '6':
            
            print(num1, "pow", num2, "=", expo(num1, num2))
            
        more = input("Do you want to perfrom another Operation? (yes/no): ")

        if(more == "no"):
            break
        
        else:
            print("Invalid Choice!!")