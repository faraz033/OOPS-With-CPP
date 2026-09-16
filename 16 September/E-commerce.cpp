#include<iostream>
using namespace std;
class product{
    int productId;
    string productName;
    int price;
    public:
    product(int Id, string n, int pr){
        productId = Id;
        productName = n;
        price = pr;
    }
    void comparePrice(product p1, product p2){
        if(p1.price > p2.price){
            cout << "Product " << p1.productId << " " << p1.productName <<" has price " << p1.price;
        }
        else if(p2.price > p1.price){
            cout << "Product " << p2.productId << p2.productName <<" has price " << p2.price;
        }
        else{
            cout << "Both have equal price ";
        }
    }
};
int main(){
    product p3(1, "Phone", 10000);
    product p4(2, "charger", 6000);

    p3.comparePrice(p3, p4);
    return 0;
}