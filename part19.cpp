#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void printData(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
    Complex(void);
};

Complex :: Complex(void){
    a = 10;
    b = 0;
};

int main(){
    Complex c;
    c.printData();
    return 0;
}