#Program 1 : Program to accept the strings which contains all vowels

# function that will check for vowels in a string
def checkString(str1):  
    
    str1 = str1.lower()    #Convert the string to lower case     
    vowels =  set("aeiou") #set of vowels

    for alpha in str1:  #Iterate over the characters in the string
        
        if alpha in vowels:  #Check if the character is in the vowel set
            
            vowels.remove(alpha)    #If the character is a vowel remove it from the set
    if len(vowels) == 0:    #last check if the vowel set is empty
        
        print("Accepted")   #accepted if there is no vowel left in the vowel set

    else:
        
        print("Not Accepted")  

str2 = input("Enter any String : ")

print(str2)
checkString(str2)


    