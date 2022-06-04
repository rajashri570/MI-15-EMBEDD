# Program 8 : Write a Python program to create the multiplication table of a number.
#        Sample output :
#        input a number: 6   


n = int(input("Enter a number : "))
for i in range(1, 11) :
    print(n, ' X ', i, ' = ', n*i)
