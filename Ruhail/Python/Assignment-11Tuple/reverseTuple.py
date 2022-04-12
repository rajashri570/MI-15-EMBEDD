# Program 4 :Reversing a Tuple

# ans : Using reversed() method

tuple_values = (1, 2, 'Python', 'Java', 23.4, 77, 10)
# doriginal tuple
print("The original tuple is: ", tuple_values)

# using slicing
tuple_values = tuple(reversed(tuple_values))

# print result after slicing
print("The reversed tuple is: ", tuple_values)
