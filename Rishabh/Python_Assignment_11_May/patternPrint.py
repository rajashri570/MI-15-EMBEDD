# Ask the user to enter a number x. 
# Use the sep optional argument to print out x, 2x, 3x, 4x, 
# and 5x, each separated by three dashes, like below.
# Enter a number: 7                                                                                                                                                         output: 7---14---21---28---35


num = int(input("Enter a number" + "\n"))
output = num
max = 6

for i in range(2, max):
    output = str(output) + "---" + str(num * i)

print(output)