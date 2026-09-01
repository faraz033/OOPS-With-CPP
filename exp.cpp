#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    // Input student details
    void input(string name, int rollNo) {
        this->name = name;
        this->rollNo = rollNo;
    }

    // Display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Function overloading
    void display(string name, int rollNo) {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Function overloading
    void display(string name, float rollNo) {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Display grade
    void displayGrade(int marks) {
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 80) {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade: C" << endl;
        }
        else if (marks >= 60) {
            cout << "Grade: D" << endl;
        }
        else if (marks >= 50) {
            cout << "Grade: E" << endl;
        }
        else {
            cout << "Grade: Fail" << endl;
        }

        cout << endl;
    }
};

int main() {

    // Creating three objects
    Student s1, s2, s3;

    // Student 1
    s1.input("Faraz", 1);
    s1.display();
    s1.displayGrade(81);

    // Student 2
    s2.input("Arush", 2);
    s2.display();
    s2.displayGrade(75);

    // Student 3
    s3.input("Aman", 3);
    s3.display();
    s3.displayGrade(87);

    return 0;
}