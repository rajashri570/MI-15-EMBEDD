# Program 4 : Write a Python program to calculate body mass index

weight = float(input("Enter Weight of Body in Kilogram : "))
height = float(input("Enter Height of Body in feet : "))
print("Your body mass index is: ", round(weight / (height * height), 2))
