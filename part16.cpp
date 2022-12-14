#include<iostream>
using namespace std;

class Complex;

class Calculater{
    public:
        int add(int a, int b){
            return (a + b);
        }
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;
    friend class Calculater;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculater :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
};

int Calculater :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
};

int main(){
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculater calc;
    int re = calc.sumRealComplex(o1, o2);
    int co = calc.sumCompComplex(o1, o2);
    cout<<"Real part of the sum: "<<re<<endl;
    cout<<"Complex part of the sum: "<<co<<endl;
    return 0;
}