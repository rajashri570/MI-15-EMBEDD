def countNumofzeros(n):
    
    if n == 0:
        
        return 0
#  write a program to find how many 0's are present in number 1000.   
    
    if n % 10 == 0:
        return 1 + countNumofzeros(n // 10)
    
    else:
        
        return countNumofzeros(n // 10)

n = int(input("Enter Number with zeros : "))

print(countNumofzeros(n))