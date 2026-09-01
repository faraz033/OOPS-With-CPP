#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];

public:
    void input() {
        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        cout << "Marks of 5 subjects: ";

        for (auto x : marks) {
            cout << x << " ";
        }

        cout << endl;
    }

    friend void totalMarks(Marks m);
};

void totalMarks(Marks m) {
    int total = 0;

    for (auto y : m.marks) {
        total += y;
    }

    cout << "Total Marks = " << total << endl;
}

int main() {
    Marks m;

    m.input();
    m.display();

    totalMarks(m);

    return 0;
}

