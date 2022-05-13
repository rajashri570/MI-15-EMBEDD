''' Program 1 : Python groupby method to remove all consecutive duplicates
        Input  : aaaaabbbbbb
        Output : ab
        Input : aabccba
        Output : abcba
 '''


def remove_consec_duplicates(s):
    new_s = ""
    prev = ""

    for c in s:
        if len(new_s) == 0:
            new_s += c
            prev = c

        if c == prev:
            continue
        else:
            new_s += c
            prev = c
    return new_s

# string with consecutive duplicates
s = input("Enter any String : ")

# remove consecutive duplicates
s = remove_consec_duplicates(s)
print("After remove duplicate Consecutive String : ",s)
