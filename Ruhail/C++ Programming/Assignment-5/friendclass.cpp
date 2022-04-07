// write example of using book class with friend class author and display data of book.

#include <iostream>
using namespace std;

class Author;   
class Book
{
    string book_name;
    string author_name;
    double price;

    friend class Author;
};

class Author
{
    public: 

    void display(Book t1)
    {
        cout<<"Enter book name   : ";
        cin>>t1.book_name;
        
        cin.ignore();
        cout<<"Enter Author name : ";
        getline(cin, t1.author_name);

        cout<<"Enter Book price  : ";
        cin>>t1.price;

        cout<<"\n====================================\n";
        cout<<"Book Name is     : "<<t1.book_name<<endl;
        cout<<"Author Name is   : "<<t1.author_name<<endl;
        cout<<"Book price is    : "<<t1.price<<endl;
    }

};

int main()
{
    Book obj1;
    Author obj2;

    obj2.display(obj1);
}