// Formula used
// If the employee worked 40 hours or less, they are paid the regular hourly rate.
// Total_salary=hourlyRate*hoursWorked
// If they worked more than 40 hours, any hours beyond 40 are considered overtime and paid at 1.5 times the regular hourly rate.
// Total_Salary=(Hourly_Rate×40)+(Hourly_Rate×1.5×(Hours_Worked−40))

#include <iostream>
using namespace std;

class Employee {
  private:
    string name;
    double hourlyRate;
    double hoursWorked;

  public:
    


    double calculateSalary() {

    }

};

int main() {
    string empName;
    double rate, hours;

    // Input employee details
    cin >> empName;
    cin >> rate;
    cin >> hours;

    // Create Employee object
    Employee emp(empName, rate, hours);

    cout << "Employee: " << emp.getname() << endl;
    cout << "Hours Worked: " << emp.gethoursWorked() << endl;
    cout << "Hourly Rate: $" << emp.gethourlyRate()<< endl;
    cout << "Total Salary: $" << emp.calculateSalary() << endl;

    return 0;
}



//INPUT
// John
// 20
// 45

//OUTPUT
// Employee: John
// Hours Worked: 45
// Hourly Rate: $20
// Total Salary: $950

// explaination

// The employee worked 45 hours.
// For the first 40 hours, the employee is paid the regular hourly rate:
// Regular salary = 40 hours × $20/hour = $800
// For the 5 extra hours (overtime), the employee is paid at 1.5 times the regular hourly rate:
// Overtime salary = 5 hours × $20/hour × 1.5 = $150
// Total salary = Regular salary + Overtime salary = $800 + $150 = $950