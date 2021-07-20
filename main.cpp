// This Program Demonstrates the use of Structures - Page 619
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
  int empNumber;    // Employee number
  string name;      // Employee's name
  double hours;     // Hours worked
  double payRate;   // Hourly payRate
  double grossPay;  // Gross Pay
};

int main() {
  PayRoll employee; // employee is a PayRoll Structure.

  // Get employee's number.
  cout << "Enter the employee's number: ";
  cin >> employee.empNumber;

  // Get employee's name.
  cout << "Enter employee's name: ";
  cin.ignore();   // To skip the remaining '\n' character
  getline(cin, employee.name);

  // Get the hours worked by the employee.
  cout << "How many hours did the employee work: ";
  cin >> employee.hours;

  // Get the employee's hourly pay rate.
  cout << "What is the employee's hourly payRate: ";
  cin >> employee.payRate;

  // Calculate the employee's gross pay.
  employee.grossPay = employee.hours * employee.payRate;

  // Display the employee data.
  cout << "Here is the employee's payroll data:\n";
  cout << "Name: " << employee.name << endl;
  cout << "Number: " << employee.empNumber << endl;
  cout << "Hours Worked: " << employee.hours << endl;
  cout << "Hourly payRate: " << employee.payRate << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << "Gross Pay: $" << employee.grossPay << endl;

  return 0;  
}