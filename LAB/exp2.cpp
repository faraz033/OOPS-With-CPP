#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
    cout << "Inside call by value : " << x << endl;
}
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside call by reference: " << x << endl;
}
int main()
{
    int m = 10;
    cout <<"Initial Value: " << m << endl;
                   
    callByValue(m);
    cout  << "After call by value: " << m << endl;

    callByReference(m);
    cout  << "After call by value: " << m << endl;

    return 0;
}