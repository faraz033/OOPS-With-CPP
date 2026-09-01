#include <iostream>
using namespace std;
int Value(int x, int y){
    x = 10;
    y = 20;
}
int reference(int &a, int &b){
    a = 30;
    b = 40;
}
int main(){
    int c = 50;
    int d = 60;


    cout << "Before call by value: " << Value(c,d) << endl;
    cout << "After call by value: " << Value(c,d) << endl;

    cout << "Before call by reference: " << reference(c,d) << endl;
    cout << "After call by reference: " << reference(c,d) << endl;


}