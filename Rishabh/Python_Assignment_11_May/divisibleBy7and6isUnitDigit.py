# 1)Write a program to print number in range 1 to 200 ,divisible by 7 and having six at unit digit.


nl=[]
for x in range(1, 201):
    if (x%7==0) and (x%10==6):
        nl.append(str(x))
        
print (' , '.join(nl))
print(nl)