#include<iostream>
using namespace std;

//inline functions
// inline int product(int a, int b){
//     return a*b;
// }

//static argumants
int product(int a, int b){
    static int c = 0;
    c = c + 1;
    return a*b+c;
}

int moneyRecieved(int currentMoney, int factor = 2){
    return currentMoney*factor;
}

int main(){
    int a, b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product is "<<moneyRecieved(22, 5)<<endl;
    cout<<"The product is "<<moneyRecieved(22)<<endl;
    return 0;
}