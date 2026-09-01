#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> attendance = {80, 65, 90, 72, 85, 70};

    int count = 0;

    for (auto percentage : attendance) {
        cout << percentage << "%" << endl;

        if (percentage > 75) {
            count++;
        }
    }
    cout << "Students with attendance more than 75%: " << count << endl;

    return 0;
}