# Program 3 :  Write a Python program to solve the Fibonacci sequence using recursion.

def fib_recur(num):
    
    if (num <= 1):
        
        return num  
    
    else:
        
        return (fib_recur(num - 1) + (fib_recur(num - 2)))

num = int(input("Enter any number : "))

print("Fibonacci sequence:")

for i in range(num):
    
    res = fib_recur(i)

    print(res)