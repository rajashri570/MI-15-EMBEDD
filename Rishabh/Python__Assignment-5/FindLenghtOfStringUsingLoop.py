# Program 4 : Find length of a string in python using for loop


def length(str):
    counter = 0
    for i in str:
        counter += 1
    return counter


str = input("Enter A String : ")
print(length(str))