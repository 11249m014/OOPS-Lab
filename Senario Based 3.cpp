//Q3.You are designing a system for a Bank. Each Account has account number, name, and balance.Write a class Account, create objects for two customers, and display their details.
#include <iostream>
using namespace std;
class Account {
public:
 int accNo;
 string name;
 float balance;
 void display() {
 cout << "Account No: " << accNo << endl;
 cout << ", Name: " << name << endl;
 cout << ", Balance: " << balance << endl;
 }
};
int main() {
 Account a1, a2;
 a1.accNo = 1001;
 a1.name = "Ramesh";
 a1.balance = 25000.50;
 a2.accNo = 1002;
 a2.name = "Sita";
 a2.balance = 40000.75;
 a1.display();
 a2.display();
 return 0;
}
