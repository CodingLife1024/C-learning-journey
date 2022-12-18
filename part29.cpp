#include<iostream>
#include<cmath>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};

class Derived: public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1::greet();
            Base2::greet();
        }
};

// int main(){ //ambiguity 1
//     Base1 base1obj;
//     Base2 base2obj;
//     base1obj.greet();
//     base2obj.greet();
//     Derived d;
//     d.greet();
//     return 0;
// } 

int main(){
    return 0;
}