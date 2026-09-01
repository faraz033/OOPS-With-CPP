#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int marks;

public:
    Student(string n, int r, int m)
    {
        name = n;
        rollNo = r;
        marks = m;
    }

    char getGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else if (marks >= 50)
            return 'E';
        else
            return 'F';
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main()
{
    Student s("FARAZ FAROOQUI", 25, 85);
    s.display();

    return 0;
}