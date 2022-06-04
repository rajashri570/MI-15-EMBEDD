# Program 4 : Write a Python program to count the number of even and odd numbers from a series of numbers

numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 31) 
count_odd = 0
count_even = 0
for x in numbers:
    if not x % 2:
    	count_even+=1
    else:
    	count_odd+=1
print("Number of even numbers :",count_even)
print("Number of odd numbers :",count_odd)
