# Program 3 : Find length of a string in python using for loop

def findLength(str):
    
    cal = 0
    
    for i in str:
        
        cal = cal + 1
    

    return cal


str = input("Input any String : ")
s = findLength(str)
print("Length Of String is : ",s)