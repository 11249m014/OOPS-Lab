//Q4.Consider a Car showroom. Each car has model, company, and price. Create a class Car with these attributes. Create three car objects and display them using a member function.
#include <iostream>
using namespace std;
class Car {
public:
 string model;
 string company;
 float price;
 void display() {
 cout << "Company: " << company << endl;
 cout << ", Model: " << model << endl;
 cout << ", Price: Rs." << price << endl;
 }
};
int main() {
 Car c1, c2, c3;
 c1.company = "Toyota";
 c1.model = "Innova";
 c1.price = 2000000;
 c2.company = "Honda";
 c2.model = "City";
 c2.price = 1200000;
 c3.company = "Hyundai";
 c3.model = "i20";
 c3.price = 800000;
 c1.display();
 c2.display();
 c3.display();
 return 0;
}
