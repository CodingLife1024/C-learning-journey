#include<iostream>
using namespace std;

//function overloading

int sum(int a, int b, int c){
    return a+b+c;
}

int sum(int a, int b){
    return a+b;
}

int main(){
    cout<<sum(2+4)<<endl;
    cout<<sum(2+4+5)<<endl;
    return 0;
}