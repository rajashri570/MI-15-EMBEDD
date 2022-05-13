# Program 6 : Write a Python function to check whether a string is a pangram or not."


def pangram(s):
    
    if len(set('abcdefghijklmnopqrstuvwxyz') - set(s.lower())) == 0:    
                                                
                                                #check if the difference is 0 or not   
        return True
    
    return False
        
str = input("Enter any string to check it is pangram or not : ")
        
if(pangram(str)):
    
    print("The given string is Pangram ")
            
else:
            
    print("The given string is not Pangram")