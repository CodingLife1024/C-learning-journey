#include<iostream>
#include<cmath>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base class constructor is called."<<endl;
        }
        void print_data_1(){
            cout<<"The value of data: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base class constructor is called."<<endl;
        }
        void print_data_2(){
            cout<<"The value of data: "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor is called."<<endl;
        }
        void print_data_Derived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};

int main(){
    Derived hrry(1, 2, 3, 4);
    hrry.print_data_1();
    hrry.print_data_2();
    hrry.print_data_Derived();
    return 0;
}