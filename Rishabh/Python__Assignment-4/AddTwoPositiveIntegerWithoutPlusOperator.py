# Program 1 : Write a Python program to add two positive integers without using the '+' operator.

n1 = int(input("Enter First Number : "))
n2 = int(input("Enter Second Number : "))

def add(a, b):
    while b != 0:
        data = a & b
        a = a ^ b
        b = data << 1
    return a
print("Addition of ",n1," And ", n2," Without Using + Operator = ",add(n1, n2))