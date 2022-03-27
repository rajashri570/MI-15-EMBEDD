
        # Prog 4:  Write a program to check whether a number is divisible by 5 and 11 or not 


num = float(input("Enter a number : "))

if num % 5 == 0 and num % 11 == 0:
    print("Yes, {0} is Divisible by 5 and 11 ".format(num))

else:
     print("No, {0} is not Divisible by 5 and 11 ".format(num))
