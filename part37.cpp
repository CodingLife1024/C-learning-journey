#include<iostream>
#include<cmath>
using namespace std;

//Polymorphism
//one name- multiple forms
//2 types of polymorphism- compile-time and run-time
//2 types of compile-time polymorphism- function-overloading and operator-overloading
//run-time polymorphism- virtual-funtctions

class baseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable "<<var_base<<endl;
        }
};

class derivedClass: public baseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable "<<var_base<<endl;
            cout<<"Displaying derived class variable "<<var_derived<<endl;
        }
};

int main(){
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer -> var_base = 23;
    base_class_pointer -> display();

    base_class_pointer -> var_base = 343;
    base_class_pointer -> display();

    derivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_derived = 76;
    derived_class_pointer -> var_base = 6;
    derived_class_pointer -> display();

    return 0;
}