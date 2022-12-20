#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part: "<<real<<endl;
            cout<<"The imaginary part: "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(2, 77);
    // (*ptr).getData();
    Complex *(ptr) = new Complex;
    ptr -> setData(45, 78);
    //(*ptr).getData();
    ptr -> getData();
}