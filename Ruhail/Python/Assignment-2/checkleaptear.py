# Python program to check Leap year
''' Explaination:- Leap year contain 366 day and normal year contain 365 days'''




year = int(input("Enter the Year : "))  


if(year % 400 == 0 and year % 100 == 0):     #if given year is divisible by 100 and 400 then it is leap year
    
    print("{0} is a Leap Year".format(year))
    
elif (year % 4 == 0 and year % 100 != 0):    #if given year is divisible by 4 then it is leap year
    print("{0} is a leap Year".format(year))
    
else:
    
    print("{0} is not a leap Year".format(year))    #we can say it is default case if both case is not satisfied then this case will run....

    