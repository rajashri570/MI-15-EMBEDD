''' Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string.

        Sample String : 'abc', 'xyz'
        Expected Result : 'xyc abz' " '''


str1 = input("Enter first String  : ")
str2 = input("Enter second String : ")

x = str1[0:2]

str1 = str1.replace(str1[0:2], str2[0:2])

str2 = str2.replace(str2[0:2],x)

print("First String has Become  : ", str1)
print("Second string has Become : ", str2)