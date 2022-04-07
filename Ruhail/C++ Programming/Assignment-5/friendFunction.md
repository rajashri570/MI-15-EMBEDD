1. What is Friend Function?

* A friend function in C++ is defined as a function that can access private, protected and public members of 
    a class.
* The friend function is declared using the friend keyword inside the body of the class.

Syntax : 


class className {
    ... .. ...
    friend returnType functionName(arguments);
    ... .. ...
}

By using the keyword, the ‘friend’ compiler understands that the given function is a friend function.

