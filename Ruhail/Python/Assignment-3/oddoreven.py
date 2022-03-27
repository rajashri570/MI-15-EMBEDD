# 4. Write a Python program to count the number of even and odd numbers from a series of numbers.
num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]

odd = 0
even = 0

for i in num:
    
    if not i % 2:
        
        even += 1
        
    else:
        
        odd += 1
        
print("odd numbers are : ", odd)
print("even numbers are : ", even)