# Program 2 :  Write a Python program to get the factorial of a number using recursion

def fact_recur(num):
    
    if(num == 1):
        
        return num
    
    else:
        
        return (num * fact_recur(num - 1))
    
n = int(input("Enter any number : "))
res = fact_recur(n)

print("Factorial is : ", res)