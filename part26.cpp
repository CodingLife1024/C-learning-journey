#include<iostream>
#include<cmath>
using namespace std;

/*
For a protected member
                        Public derivation       Private derivation      Protected derivation
Private members         Not inherited           Not inherited           Not inherited
Protected members       Protected               Private                 Protected
Public members          Public                  Private                 Protected
*/

class Base{
    protected:
        int a;
    private:
        int b;
};

class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    //cout<<d.a; //will not work as both d and a are in protected classes
    return 0;
}