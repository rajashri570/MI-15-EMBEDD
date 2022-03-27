# 1. Write a Python program to find those numbers which are divisible by 7 and multiple of 5, between 1500 and 2700


for i in range(1500, 2700): 
    
    if(i % 5 == 0 and i % 7 == 0):
        
        print(i)