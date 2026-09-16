#include <iostream>
using namespace std;

void Value(int x, int y) {
    x = 10;
    y = 20;
}

void reference(int &a, int &b) {
    a = 30;
    b = 40;
}

int main() {
    int c = 50;
    int d = 60;

    // Call by Value
    cout << "Before call by value: c = " << c << ", d = " << d << endl;

    Value(c, d);

    cout << "After call by value: c = " << c << ", d = " << d << endl;


    // Call by Reference
    cout << "\nBefore call by reference: c = " << c << ", d = " << d << endl;

    reference(c, d);

    cout << "After call by reference: c = " << c << ", d = " << d << endl;

    return 0;
}