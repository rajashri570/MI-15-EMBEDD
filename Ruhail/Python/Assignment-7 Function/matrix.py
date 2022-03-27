# Program 4 : Python Program to add two matrices using nested for loop.
def matrix(x, y):
    
    res =   [[0,0,0],
            [0,0,0],
            [0,0,0]]
    
    for i in range(len(x)):
        
        for j in range(len(x[0])):
            
             res[i][j] = x[i][j] + y[i][j]
            
    for sum in res:
                
        print(sum)



x = [[2,5,3],
    [1 ,6,3],
    [8 ,7,9]]

y = [[3,0,1],
    [4,1,3],
    [4,2,6]]

print("Result is : ")
matrix(x, y)

