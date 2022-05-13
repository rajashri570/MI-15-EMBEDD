# Program 3: Remove items from Set until set not become empty set

# Using the pop() method
def Remove(initial_set):
    
	while initial_set:
		initial_set.pop()
  
		print(initial_set)

initial_set = set([3, 2, 6, 10, 5, 1])
Remove(initial_set)
