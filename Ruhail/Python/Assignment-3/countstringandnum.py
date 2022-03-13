strAndnum = input("Enter a string : ")

L = 0
D = 0


for str in strAndnum:
    
    if str.isdigit():
        
        D = D + 1
        
    elif str.isalpha():
        
        L = L + 1
        
    else:
        
        pass
        
print("Digits are   : ", D)
print("Letters are  : ", L)