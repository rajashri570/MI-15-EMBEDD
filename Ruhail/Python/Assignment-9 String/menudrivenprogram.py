''' Program 2.     write a menu driven Program to
        Perform following operations
        1. Length of String
        2. Reverse String
        3. Check Palindrome or not
        4. Check Symmetrical or not
        5. Check Permutations and combination
        6. Check two strings are anagram or not
        7. Exit"
 '''
import itertools


def lengthOfString(str):
     return str
 
def revOfString(str):
    return str

def isPalindrome(str):
    return str == str[::-1]

def symmetrical(str):
    return str

# def check(str1, str2):
#     return(str1, str2)
    


print("Select Your Choice         : ")
print("1. Length of String        : ")
print("2. Reverse String          : ")
print("3. Check Palindrome or not : ")
print("4. Check Symmetrical or not              : ")
print("5. Check Permutations and combination    : ")
print("6. Check two strings are anagram or not  : ")
print("7. Exit")

while True:
    
    choice = input("Enter Your Choice : ")
    
    if choice in ('1', '2', '3', '4', '5', '6', '7'):
        
        str = input("Enter any String : ")
        
        if choice == '1':
            print("Length Of String is : ",len(str))
            
        if choice == '2':
            
            str = str[:: -1]
            print("Reverse String is : ",str)
        
        if choice == '3':
            res = isPalindrome(str)
            
            if res:
                print("Yes")
            else:
                print("No")
                
        if choice == '4':
            
            n=len(str)
            flag=0
            mid = 0
            if n%2:
                 mid=n//2+1
        else:
                mid= n//2
                
        start = 0
        end = mid
        
        while(start <mid and end<n):
            if(str[start]== str[end]):
                start= start+1
                end= end+1
            else:
                flag=1
                break
        if flag==0:
            print("symmetrical")
        else:
            print("not symmetrical")

        if choice == '5':
            
                per = itertools.permutations(str)
                
                print("Permutations are : ")
                for i in per:
                    print(*i) 
                
                combi = itertools.combinations(str, 3)
                
                print("Combinations are : ")
                for i in combi:
                    print(*i)
                    
        # if choice == '6':
        #         str1 = input("Enter first string : ")
        #         str2 = input("Enter second string : ")
            
        #         def check(str1, str2):
        #             if (sorted(str1) == sorted(str2)):
                
        #                 print("The string are Anagrams")
        #             else:
        #                 print("The string are not Anagrams")
                    
            
        