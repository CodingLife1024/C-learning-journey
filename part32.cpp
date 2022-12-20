#include<iostream>
#include<cmath>
using namespace std;

/*
Syntax for Initialisation List in Constructor:
constructor (argument-list): initialisation section
{
    assignment + other code;
}
*/

class Test{
    int a, b;
    public:
        Test(int i, int j): b(j), a(i + b){
            cout<<"Constructor done"<<endl;
            cout<<"The values are "<<a<<" and "<<b<<endl;
        }
};

int main(){
    Test(5, 7);
    return 0;
}