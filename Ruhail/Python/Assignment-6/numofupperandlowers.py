#Program 3 : Write a Python function that accepts a string and calculate the number of upper case letters and lower case letters.

str = input("Enter Any String : ")

count1 = 0
count2 = 0

for i in str:
    
    if(i.islower()):    #here we use islower function for find lower case character
        
        count1 = count1+1   #increament
        
    elif(i.isupper()):  #here we use islower function for find lower case character
        
        count2 = count2+1   #increament
        
print("\nThe number of Lowercase Character is : ", count1)
print("The number of Uppercase Character is : ", count2)