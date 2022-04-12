'''  Remove empty tuples from a list

 ans : here we have two method to remove empty tuple from a list...
        1. list comprehension 
        2. filter()
        
        here we use list comprehension for remove empty lsit

 '''

def Emptylist(studentInfo):
    
        studentInfo = [tup for tup in studentInfo if tup]
        return studentInfo
    
    
studentInfo = [('Student1', '001'), ('Student2', '002'), ('Student3', '003'), ('Student', '004')]

res = Emptylist(studentInfo)

print("Tuple is : ", res)
