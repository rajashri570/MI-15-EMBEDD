# Program 1 : Python Program to add two matrices using nested for loop.
# Matrix 1
x = [[2,5,3],
    [1 ,6,3],
    [8 ,7,9]]

# Matrix 2
y = [[3,0,1],
    [4,1,3],
    [4,2,6]]

# Result of 2 matrix
res =   [[0,0,0],
         [0,0,0],
         [0,0,0]]


for i in range(len(x)):     #aaply for loop with length function
    
    for j in range(len(y)): #aaply for loop with length function
        
        res[i][j] = x[i][j] + y[i][j]   #sum of two matrix 
        
for sum in res: #find sum
    
    print(sum)