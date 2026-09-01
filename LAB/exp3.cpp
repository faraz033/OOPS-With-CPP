#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b) {
    return a + b;
}

// Default argument
void display(string name = "Student") {
    cout << "Name: " << name << endl;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {

    // Inline function
    cout << "Addition: " << add(10, 20) << endl;
    cout << "Addition: " << add(30, 40) << endl;

    // Default argument
    display();
    display("Faraz");

    // Function overloading
    cout << "Multiplication (int): "
         << multiply(5, 4) << endl;

    cout << "Multiplication (float): "
         << multiply(5.5f, 2.0f) << endl;

    return 0;
}