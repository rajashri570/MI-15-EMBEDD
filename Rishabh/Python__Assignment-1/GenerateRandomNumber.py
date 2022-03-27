

            #Prog 5 : Python Program to genrate random number


import random

print(random.randint(100, 10000))
print()
# OR
rand_list = []  
for i in range(0,10):  
    n = random.randint(1,50)  
    rand_list.append(n)  
print(rand_list)  