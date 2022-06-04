#   write a program to print numbers from 1-300 contains 3 digit

""" for num in range(1, 301):
   # if num > 100 and num < 301: 
    if(num%1==3) or (num%10==3) or (num%100==3):
        print(num,end = " , ") 

print()

 """

for num in range(1, 301):
    if '3' in str(num):
        print(num, end = " , ")
