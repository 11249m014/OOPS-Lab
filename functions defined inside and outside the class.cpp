//II)Scenario Based Questions demonstrates member functions defined inside and outside the class



//Q1.Employee Payroll A company maintains employee details: employee ID, name, salary.Define a function setEmployee() inside the class to assign employee data.Define a function displayEmployee() outside the class to display the employee’s information. Write a program to create and display multiple employees


#include <iostream>
using namespace std;
class Employee {
public:
 int empID;
 string name;
 float salary;
 // Member function defined inside the class
 void setEmployee(int id, string n, float s) {
 empID = id;
 name = n;
 salary = s;
 }
 // Member function declaration (to be defined outside)
 void displayEmployee();
};
// Function defined outside class using scope resolution
void Employee::displayEmployee() {
 cout << "Employee ID: " << empID
 << ", Name: " << name
 << ", Salary: Rs." << salary << endl;
}
int main() {
 Employee e1, e2;
 // Call function defined inside class
 e1.setEmployee(101, "Ravi", 50000.75);
 e2.setEmployee(102, "Priya", 62000.50);
 // Call function defined outside class
 e1.displayEmployee();
 e2.displayEmployee();
 return 0;
}











//Q2. Hospital Patient RecordA hospital wants to maintain records of patients. Each patient has: Patient ID Name Disease👉 Requirements: Define a function setPatient() inside the class to assign values. Define a function showPatient() outside the class to display patientdetails.



#include <iostream>
using namespace std;
class Patient {
public:
 int patientID;
 string name;
 string disease;
 // Function defined inside the class
 void setPatient(int id, string n, string d) {
 patientID = id;
 name = n;
 disease = d;
 }
 // Function declared inside, defined outside
 void showPatient();
};
// Function defined outside the class
void Patient::showPatient() {
 cout << "Patient ID: " << patientID
 << ", Name: " << name
 << ", Disease: " << disease << endl;
}
int main() {
 Patient p1, p2;
 // Using inside function to set details
 p1.setPatient(301, "Arjun", "Fever");
 p2.setPatient(302, "Meena", "Diabetes");
 // Using outside function to display
 p1.showPatient();
 p2.showPatient();
 return 0;
}
