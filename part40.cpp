#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

Two ways to open a file:
1. using the constructor
2. using the member function open() for the class
*/

int main(){
    ofstream hout("sample60.txt");
    cout<<"Enter your name: "<<endl;
    string name;
    cin>>name;
    hout<<name<<endl;
    hout<<"The name's " + name<<endl;
    return 0;
}