# 4. Python Program to swap two variables


a = int(input("Enter First Number : "))
b = int(input("Enter Second Number : "))

print("\nBefore Swapping")
print("------------------------")
print("Value of a is : ", a)
print("Value of b is : ", b)

tmp = a
a = b
b = tmp

print("\nAfter Swapping")
print("-----------------------")
print("value of a is :",a)
print("value of b is :",b)
