#include<iostream>
#include<cmath>
using namespace std;

template<class T>
class Har{
    public:
        T data;
        Har(T a){
            data = a;
        }
        void display();
        //{
        //     cout<<data<<endl;
        // }
};

template<class T>
void Har<T>:: display(){
    cout<<data<<endl;
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    // Har<float> h (5.77);
    // cout<<h.data<<endl;
    // h.display();

    func(4);
    func1(6);
    return 0;
}