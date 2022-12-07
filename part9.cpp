#include<iostream>
using namespace std;

//recursion
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int a){
    if (a<=2){
        return 1;
    }
    return fibonacci(a-1)+fibonacci(a-2);
}

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<"The fibonacci is: "<<fibonacci(n)<<endl;
    return 0;
}