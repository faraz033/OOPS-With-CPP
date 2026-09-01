#include <iostream>
using namespace std;
class Employee{
    int emplyeeID;
    string name;
    int salary;
    public:

    void data(int ID, string n, int s){
        emplyeeID = ID;
        name = n;
        salary = s;
    }
    void input();
    void display();
};
void Employee :: input(){
        cout << "Enter employee ID: ";
        cin >> emplyeeID;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter emplyee salary: ";
        cin >> salary;
}
void Employee::display(){
        cout << "\nEmployee ID: " << emplyeeID << endl;
        cout << "Emplyee Name: " << name << endl;
        cout << "Employee salary: " << salary << endl;
}
int main(){
    Employee E;

    E.input();
    E.display();

    return 0;
}