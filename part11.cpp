#include<iostream>
using namespace std;

//object oriented programming

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c);
        void getData(){
            cout<<"a is "<<a<<endl;
            cout<<"b is "<<b<<endl;
            cout<<"c is "<<c<<endl;
            cout<<"d is "<<d<<endl;
            cout<<"e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Meme;
    Meme.setData(1, 2, 4);
    Meme.getData();
    return 0;
}