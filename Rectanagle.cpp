#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
   
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Constructor called: Rectangle object created" << endl;
    }

  
    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }


    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    ~Rectangle() {
        cout << "Destructor called: Rectangle object destroyed" << endl;
    }
};

int main() {
    Rectangle r1(10, 5); // Create object with length=10, breadth=5
    r1.display();
    return 0;
}