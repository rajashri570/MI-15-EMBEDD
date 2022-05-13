# write a program that print the list [1,11,111,1111,11111,111111….]   

import itertools

def groups_of_ones(n):
    return ','.join([str("1"*i) for i in range(1,n)])


print (groups_of_ones(8)) # prints 1,11,111,1111,11111,111111,1111111