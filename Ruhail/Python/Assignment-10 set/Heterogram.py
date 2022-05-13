# Program 2 : Check whether a given string is Heterogram or not

str1 = input("Enter any string : ")

def check_heterogram(input):
 
     # separate out list of all alphabets
     list_of_alphabets = [ alph for alph in input if ( ord(alph) >= ord('a') and ord(alph) <= ord('z') )]
 
     # convert into set and compare lengths
     if len(set(list_of_alphabets))==len(list_of_alphabets):
         print ("Yes, the string '", input, "'is heterogram")
     else:
         print ("No, the string'", input, "'is not heterogram")
 
check_heterogram(str1)