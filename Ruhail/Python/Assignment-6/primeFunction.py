# Program 4 : Write a Python function that takes a number as a parameter and check the number is prime or not.

def primeNo(num):
    
    if(num == 1):
        
        return "Number is not prime Number"
        
    elif(num == 2):
        
        return "Number is prime Number"
    
    else:
        
        for p in range(2, num):
            
            if(num % p == 0):
                
                return "Number is not prime Number"
            
        return "Number is prime Number"
        
print(primeNo(7))
print(primeNo(13))
print(primeNo(166))
print(primeNo(10))
print(primeNo(8))
