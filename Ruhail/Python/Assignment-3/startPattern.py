# 2. Write a Python program to construct the following pattern, using a nested while loop.

star = int(input("Enter range for print star pattern : "))


for i in range(star):
    
    for j in range(i):
        
        print('* ', end= "")
        
    print(' ')
    
    
for i in range(star, 0, -1):
    
    for j in range(i):
            
        print('* ', end= "")
            
    print(' ')