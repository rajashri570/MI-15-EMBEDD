# 5. Write a Python program to get the Fibonacci series between 0 to 50.

num = int(input("Enter Number : ")) #print with the help of user

n1 = 0
n2 = 1


for n in range(0, num):   
    
    if(n <= 1):
        
        fib = n
        
    else:
        
        fib = n1 + n2
        n1 = n2
        n2 = fib
        
    print(fib)    

#print directly
n1,n2 = 0,1
print(n1)

while n2<50:
        
    print(n2)
    n1,n2 = n2, n1+n2