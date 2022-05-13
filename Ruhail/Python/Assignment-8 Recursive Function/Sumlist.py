# Program 1 : Write a Python program to calculate the sum of a list of numbers using recursion.	

def recursion_list_Sum(List):   
    
    sum = 0 
    
    for i in List:  
        
        if type(i) == type([]):
            
            sum = sum + recursion_list_Sum(i)
        
        else:
            
            sum = sum + i
    
    return sum

res = recursion_list_Sum([10, 2, 5, 7, 8, 12, 41])

print(res)