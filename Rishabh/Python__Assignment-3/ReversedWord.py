#  Program 3 : Write a Python program that accepts a word from the user and reverse it.

str = input("Input a word to reverse: ")

for char in range(len(str) - 1, -1, -1):
  print(str[char], end="")
print("\n")
