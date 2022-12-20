#include<iostream>
#include<cmath>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"The item ID is "<<id<<endl;
            cout<<"The price is "<<price<<endl;
        }
};

int main(){
    int size = 4;
    //int* ptr = &size;
    //int* ptr = new int[34];
    Shop* ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for(i = 0; i < size; i++){
        cout<<"Enter ID and price of item "<<(i+1)<<endl;
        cin>>p>>q;
        ptr -> setData(p, q);
        ptr++;
    }
    for(i = 0; i < size; i++){
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp -> getData();
        ptrTemp++;
    }
    return 0;
}