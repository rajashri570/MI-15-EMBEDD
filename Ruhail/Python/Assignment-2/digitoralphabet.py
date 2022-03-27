# 6. Write a program to check  entered input is  alphabet digit or special characte

input = (input("Enter any input : "))


if(input >= 'a' and input <= 'z'  or input >= 'A' and input <= 'Z'):
    
    print("it is a alphabet")
    
elif(input >= '0' and input <= '10'):
    
    print("It is a number")
    
else:
    
    print("It is a special character")