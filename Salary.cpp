#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> salary = {45000, 55000, 62000, 48000, 75000, 52000};

    double total = 0;
    double highest = salary[0];
    int count = 0;

    cout << "Employee Salaries: " << endl;
    for (auto s : salary){
        cout << s << endl;

        total += s;

        if (s > highest){
            highest = s;
        }
        if (s > 50000){
            count++;
        }
    }

    double average = total / salary.size();

    cout << "Total Salary: " << total << endl;
    cout << "Highest Salary: " << highest << endl;
    cout << "Employees with salary greater than 50000: " << count << endl;
    cout << "Average Salary: " << average << endl;

    return 0;
}