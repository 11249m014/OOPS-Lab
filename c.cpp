#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollno;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) {
        name = n;
        rollno = r;
        marks = m;
        cout << "Student record created for " << name << endl;
    }

    
    void display() {
        cout << "---- Student Details ----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }

    
    ~Student() {
        cout << "Record of student " << name << " is deleted" << endl;
    }
};

int main() {
    Student s1("Rahul", 101, 88.52);
    s1.display();

    Student s2("Nirmal", 102, 92.5);
    s2.display();

    return 0;
}
