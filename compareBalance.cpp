#include<iostream>
using namespace std;
class bankAccount{
    int AccountNumber;
    string customerName;
    int balance;
public:
    bankAccount(int AccNo, string n, int b){
        AccountNumber = AccNo;
        customerName = n;
        balance = b;
    }
    friend void compareBalance(bankAccount b1, bankAccount b2);
};
    void compareBalance(bankAccount b1, bankAccount b2){
        if(b1.balance > b2.balance){
            cout << "Details of Account with higher balance\n" << b1.AccountNumber << endl;
            cout << b1.customerName << endl;
            cout << b1.balance;
        }
        else if(b2.balance > b1.balance){
            cout << "Details of Account with higher balance\n" << b2.AccountNumber << endl;
            cout << b2.customerName << endl;
            cout << b2.balance;
        }
        else{
            cout << "Both have same balance ";
        }
    }
int main(){
    bankAccount b3(2025, "Faraz", 6000);
    bankAccount b4(2026, "Arush", 7000);

    compareBalance(b3,b4);
    return 0;
}