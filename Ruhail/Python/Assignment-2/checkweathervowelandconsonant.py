# 5.  Write a program to input any alphabets and check it is vowel or consonent

#Explanation :- here we are using list to check weather it is vowel or consonant

vowel = input("Enter any alphabet : ")

list = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']       #list

if(vowel >= 'a' and vowel <= 'z' or vowel >= 'A' and vowel <= 'Z'): #nested if else 
    
    if vowel in list:
        
        print("It is Vowel")

    else:
        
        print("It is Consonant")
        
else : 
    
    print("it is not vowel and consonant.....")