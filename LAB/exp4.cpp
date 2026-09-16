#include <iostream>
using namespace std;

int main() {
    int marks[] = {85, 90, 78, 92, 88};

    cout << "Marks of students:" << endl;

    for (auto x : marks) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}