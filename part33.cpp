#include<iostream>
#include<cmath>
using namespace std;

//Revisiting pointers

int main(){
    int a = 4;
    int* (ptr) = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    float* p = new float(6.0976);
    cout<<"The value at address p is "<<*(p)<<endl;
    int* arr = new int[3];
    arr[0] = 10;
    *(arr+ 1) = 20;
    arr[2] = 30;
    //delete arr;
    cout<<"The values are "<<arr[0]<<", "<<arr[1]<<" and "<<arr[2]<<endl;
    return 0;
}