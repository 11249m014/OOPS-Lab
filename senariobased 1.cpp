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
