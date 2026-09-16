#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;

    static int activePatients;

public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;

        cout << "Patient created: " << patientName << endl;
        cout << "Active patients: " << activePatients << endl;
    }

    ~Patient() {
        activePatients--;

        cout << "Patient destroyed: " << patientName << endl;
        cout << "Active patients: " << activePatients << endl;
    }

    static void showActivePatients() {
        cout << "Current active patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient::showActivePatients();
    Patient p1(1, "Faraz");

    {
        cout << "\nInside local block:" << endl;

        Patient p2(2, "Arush");
        Patient::showActivePatients();

        Patient p3(3, "Anivaran");
        Patient::showActivePatients();

        cout << "\nLeaving local block..." << endl;
    }

    cout << "\nAfter local block:" << endl;
    Patient::showActivePatients();

    return 0;
}