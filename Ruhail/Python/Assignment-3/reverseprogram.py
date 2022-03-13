# 3. Write a Python program that accepts a word from the user and reverse it.
str = (input("input any string : "))

print("\nOriginal String is : ", str)

rev_word = list(reversed(str))  #using reverse method 

print("\nReverse String is : ")
print("".join(rev_word))