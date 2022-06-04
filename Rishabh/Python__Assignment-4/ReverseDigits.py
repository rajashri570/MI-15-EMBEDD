# Program 3 : Write a Python program to reverse the digits of a given number and add it to the original, If the sum is not a palindrome repeat this procedure.

num = int(input("Enter the number : "))
rev = 0
while num != 0 :
    rev = rev*10 + num%10
    num = num // 10


print("Reversed Number : ", rev)




 