#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];
    static int totalStudents;

public:
    void input() {
        cout << "Enter marks of 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
        totalStudents++;
    }

    void display() {
        cout << "Marks of 5 subjects: ";
        for (auto x : marks) {
            cout << x << " ";
        }
        cout << endl;
    }

    static void showTotalStudents() {
        cout << "Total students = " << totalStudents << endl;
    }

    friend void totalMarks(Marks m);
};

int Marks::totalStudents = 0;

void totalMarks(Marks m) {
    int total = 0;

    for (auto y : m.marks) {
        total += y;
    }

    cout << "Total Marks = " << total << endl;
}

int main() {
    Marks m1;
    Marks m2;

    cout << "Student 1:" << endl;
    m1.input();
    m1.display();
    totalMarks(m1);

    cout << "\nStudent 2:" << endl;
    m2.input();
    m2.display();
    totalMarks(m2);

    cout << endl;

    Marks::showTotalStudents();

    return 0;
}