#include <bits/stdc++.h>
using namespace std;

class student {
    string name;
    int marks;

public:
    student(string n, int m) {
        name = n;
        marks = m;
        cout << "Parameterized constructor called" << endl;
    }
    student() {
        name = "Arush";
        marks = 90;
        cout << "Default constructor called" << endl;
    }
    student(const student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy constructor called" << endl;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    ~student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    student s1("Faraz", 85);
    student s2 = s1;
    student s3;

    s1.show();
    s2.show();
    s3.show();

    return 0;
}