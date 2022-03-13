''' Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
                      Basic Salary <= 10000 : HRA = 20%, DA = 80%
                      Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
                      Basic Salary >= 20001 : HRA = 30%, DA = 95%
 '''

basic = float(input("Input basic salary of an employee : "))

if(basic <= 10000):         
    
    DA = basic * 20 / 100
    HRA = basic * 80 /100
    
    Gross = basic + DA + HRA
    
    print("Gross salary of employee is : {0}".format(Gross))
    
elif(basic >= 10001 and basic <= 20000):
    
    DA = basic * 90 / 100      #DA -->  Dearness_Allowance
    HRA = basic * 25 / 100     #HRA --> House Rent Allowance
    
    Gross = basic + DA + HRA    #formula to find Gross salary 
    
    print("Gross salary of employee is :  {0}".format(Gross))

elif(basic >= 20001):
    
    DA = basic * 95 / 100
    HRA = basic * 30 / 100
    
    Gross = basic + DA + HRA
    
    print("Gross salary of employee is : {0}".format(Gross))

 