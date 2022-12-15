#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void printData(){
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
    Complex(int, int);
};

Complex ::Complex(int x, int y){
    a = x;
    b = y;
};

int main(){
    Complex a(3, 5);
    Complex b = Complex(7, 8);
    a.printData();
    b.printData();
    return 0;
}