#include<iostream>
#include<cmath>
using namespace std;

//Polymorphism
//one name- multiple forms
//2 types of polymorphism- compile-time and run-time
//2 types of compile-time polymorphism- function-overloading and operator-overloading
//run-time polymorphism- virtual-funtctions

class baseClass{

};

class derivedClass: public baseClass{

};

int main(){
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    return 0;
}