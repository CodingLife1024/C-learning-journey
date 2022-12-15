#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int x, int y){
        a = x;
        b = y;
        }
        Complex(int x){
        a = x;
        b = 0;
        }
        Complex(){
        a = 10;
        b = 0;
        }
        void printData(){
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
};

int main(){
    Complex c1(1, 2);
    Complex c2(88);
    Complex c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}