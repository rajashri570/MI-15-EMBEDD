# write a program that print the list [1,11,111,1111,11111,111111….]  

n=int(input("Enter a number : "))
for i in range(n):
    print('1'*i, end=" ")

print()