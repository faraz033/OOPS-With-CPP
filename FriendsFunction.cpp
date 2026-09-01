#include<iostream>
using namespace std;
class BankAccount{
    private:
    int AccountNumber;
    int Balance;
    friend void compareBalance(BankAccount b1, BankAccount b2);
};
void compareBalance(BankAccount b1, BankAccount b2){
    if(b1.Balance > b2.Balance){
        cout << "Account b1 has higher balance";
    }
    else{
        cout << "Account b2 has higher balance";
    }
}
int main(){
    
    return 0;
}