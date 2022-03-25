# 4. Write a Python program to calculate body mass index.

Height = float(input("Enter Your Height in feet     : "))
Weight = float(input("Enter Your Weight in kilogram : "))

Body_Mass = round(Weight / (Height * Height), 2)

print("Your Body Mass Is : ", Body_Mass)