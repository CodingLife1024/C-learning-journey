#include<iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapPointerReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 6;
    int y = 8;
    cout<<x;
    cout<<y;
    swapPointerReference(x, y);
    cout<<x;
    cout<<y;
    return 0;
}