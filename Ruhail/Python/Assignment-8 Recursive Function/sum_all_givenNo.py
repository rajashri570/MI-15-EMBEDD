# Program 4 : Python program to find the sum of sequence of all numbers upto the given number using recursive function

def sum_recur(num):
    
    if num <= 1:
        
        return num
    
    else:
        
        return num +  sum_recur(num-1)
    
n = int(input("Enter number : "))
    
res = sum_recur(n)

print("Number of sum is : ", res) 