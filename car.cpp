#include <iostream>
using namespace std;

class Car {
    string brand;
    int price;

public:
    
    Car() {
        brand = "Unknown";
        price = 0;
        cout << "Default Constructor called: Car object created" << endl;
    }


    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }

    
    ~Car() {
        cout << "Destructor called: Car object destroyed" << endl;
    }
};

int main() {
    Car c1;       // Object created → Constructor runs
    c1.display(); // Show details
    return 0;     // Object goes out of scope → Destructor runs
}