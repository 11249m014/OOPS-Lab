#include <iostream>
using namespace std;

class Book {
    string title;
    string author;

public:
    
    Book(string t, string a) {
        title = t;
        author = a;
        cout << "Constructor called: Book object created" << endl;
    }

    
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }


    ~Book() {
        cout << "Destructor called: Book object destroyed" << endl;
    }
};

int main() {
    Book b1("C++ Programming", "Bjarne Stroustrup");
    b1.display();
    return 0;
}