#1. Write a Python program to copy the contents of a file to another file .

fileRead = "ReadData.txt"
fileWrite = "WriteData.txt"

f = open("ReadData.txt", "r")
data = f.read()
f.close()

with open("WriteData.txt", "a") as f:
    f.write(data)
print("completed...")

