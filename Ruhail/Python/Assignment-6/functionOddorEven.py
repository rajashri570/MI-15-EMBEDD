#Program 5 : Write a Python program function to print the even numbers from a given list.

def Even(l):    

    list = []
    
    for num in l:
        
        if (num % 2 == 0):
            
            list.append(num)
            
    return list
        
even = Even([4, 3, 5, 7, 8, 9, 12, 14, 13, 71, 23, 24, 65])

print("Even Numbers is : ", even)