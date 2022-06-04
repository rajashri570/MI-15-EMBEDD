 # Program 1 : Write a Python function to sum all the numbers in a list.



def sum(numbers):
    total = 0
    for x in numbers:
        total += x
    return total


print(sum((1, 23, 43, 8, 2, 3, 0, 7)))
