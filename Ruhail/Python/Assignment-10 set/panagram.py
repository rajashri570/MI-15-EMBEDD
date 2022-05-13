# Program 4: Python set to check if string is panagram"

def checkPangramString(string):

    # converting given string to set using set() function
    setString = set(string)
    # calculate the length of the set
    length = len(setString)
    # If the length is 26, it is a pangram so return true
    if(length == 26):
        return True
    else:
        return False


# ask user to enter any string
string = input("Enter any string : ")

# converting the given string into lower case
string = string.lower()


# passing this string to checkPangramString function which returns true
# if the given string is pangram else it will return false
if checkPangramString(string):
    print("The given string", string, "is a pangram")
else:
    print("The given string", string, "is not a pangram")
