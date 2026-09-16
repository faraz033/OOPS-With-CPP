#include <iostream>
using namespace std;

int area(int s) {
    return s * s;
}

int area(int l, int b) {
    return l * b;
}

float simpleInterest(float p, float t, float r = 5.0) {
    return (p * t * r) / 100;
}

int main() {
    int s, l, b;
    float p, t;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square = " << area(s) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << area(l, b) << endl;

    cout << "\nEnter principal and time: ";
    cin >> p >> t;

    cout << "Simple Interest (default rate 5%) = "
         << simpleInterest(p, t) << endl;

    return 0;
}