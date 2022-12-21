#include<iostream>
#include<cmath>
using namespace std;

class baseClass{
    public:
        int var_base;
        void display(){
            cout<<"1. Displaying base class variable "<<var_base<<endl;
        }
};

class derivedClass: public baseClass{
    public:
        int var_derived;
        void display(){
            cout<<"2. Displaying base class variable "<<var_base<<endl;
            cout<<"2. Displaying derived class variable "<<var_derived<<endl;
        }
};

int main(){
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}