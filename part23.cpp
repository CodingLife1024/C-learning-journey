#include<iostream>
#include<cmath>
using namespace std;

int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number  "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when destructor is called for object number  "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating first object n1."<<endl;
    num n1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating 2 more objects, n2 and n3"<<endl;
        num n2, n3;
        cout<<"Exiting this block."<<endl;
    }
    cout<<"Back to main."<<endl;
    return 0;
}