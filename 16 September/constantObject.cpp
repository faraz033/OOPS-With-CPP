#include <iostream>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    float salary;

public:
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0.0;
    }

    Employee(int id, string n, float s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float newSalary) {
        salary = newSalary;
    }
};

int main() {

    const Employee emp1(101, "Faraz", 50000);

    cout << "Const Employee Details:" << endl;
    emp1.display();
    Employee emp2(emp1);

    cout << "\nCopied Employee Details:" << endl;
    emp2.display();

    emp2.updateSalary(60000);

    cout << "\nAfter Salary Update:" << endl;
    emp2.display();

    return 0;
}