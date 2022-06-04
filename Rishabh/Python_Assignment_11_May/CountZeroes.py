# write a program to find how many 0's are present in number 1000.

num = 1000
count = 0

for i in str(num):
    if i == '0' :
        count += 1

print("Total zeroes : ", count) 
