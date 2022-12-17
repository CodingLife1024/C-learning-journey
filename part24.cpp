#include<iostream>
#include<cmath>
using namespace std;

//Inheritance

//Base Class
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpID){
            id = inpID;
            salary = 34.00;
        }
        Employee(){};
};

class Programmer : public Employee{
public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility mode}} {{base-class-name}}
{
    class members/methods etc
}
*/

int main(){
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}