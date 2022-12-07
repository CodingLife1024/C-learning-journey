#include<iostream>
using namespace std;

int main(){
    int marks[4] = {1, 2, 3, 4};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    int math[5];
    math[0] = 44;
    math[1] = 45;
    math[2] = 455;
    math[3] = 66;
    math[4] = 22;
    // cout<<math[3];
    // for (int i = 0; i<5; i++){
    //     cout<<"The "<<i+1<<"th element is "<<math[i]<<endl;
    // }
    int* p = math;
    // cout<<"the first number is "<<*p<<endl;
    // cout<<"the second number is "<<*(p+1)<<endl;
    // cout<<"the third number is "<<*(p+2)<<endl;
    // cout<<"the fourth number is "<<*(p+3)<<endl;
    // cout<<"the fifth number is "<<*(p+4)<<endl;
    return 0;
}