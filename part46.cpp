#include<iostream>
using namespace std;
template<class T3>
void swapp(T3 &a, T3 &b){
    T3 temp = a;
    a = b;
    b = temp;
};

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

int main(){
    float a;
    a = funcAverage(2, 5.2);
    cout<<"the avg is: "<<a<<endl;
    printf("The average of these numbers is %f",a);
    cout<<endl;
    int x = 4, y = 9;
    cout<<x<<y<<endl;
    swapp(x, y);
    cout<<x<<y<<endl;
    return 0;
}