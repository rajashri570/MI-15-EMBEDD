# Program 2 : Python program create function to check if a string is palindrome or not

def isPalindrome(s):		#function palindrome
	return s == s[::-1]		#revers string


#String
s = "level"	
res = isPalindrome(s)		#function calling

if res:						#if else condition
	print("Given String is Palindrome")
else:
	print("Given String is not Palindrome!")
