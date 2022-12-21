#include<iostream>
#include<cmath>
using namespace std;

class A{
    int a;
    public:
        // void setData(int a){
        //     this -> a = a;
        // }
        A& setData(int a){
            this -> a = a;
            return *this;
        }
        void getData(){
            cout<<"The value is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(77).getData();
    a.getData();
    return 0;
}