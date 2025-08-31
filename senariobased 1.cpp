//A company manufactures Laptops. Each laptop has a brand name,
//processor type, and RAM size.Write a class to represent a laptop, create
//two objects with different details, and display them.

#include<iostream>
using namespace std;

class Laptop{
public:
    string brand;
    string processor;
    int ram;

    void display(){
      cout<<"Brand:"<<brand
      cout<<"Processor:"<<processor
      cout<<"RAM:"<<ram<<"GB"<<endl;
    }
};

int main(){
Laptop 11,12;
11.brand="Dell";
11.processor="Intel i5";
11.ram=8;
12.brand="HP";
12.processor="AMD Ryzen 5";
12.ram=16;
11.display();
12.display();
return 0;
}
