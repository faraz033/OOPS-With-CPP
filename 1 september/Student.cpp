#include <iostream>
using namespace std;

class student {
public:
    int rollNum;
    string name;
    int marks;

    void display() {
        cout << "Roll Number: " << rollNum << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    student s;
    
    s.rollNum = 2;
    s.name = "Faraz";
    s.marks = 95;
    s.display();

    return 0;
}