#include<iostream>
#include<cmath>
using namespace std;

class bankDeposit{
    int principle;
    int years;
    float interestRate;
    float returnValue;
    public:
        bankDeposit(){}
        bankDeposit(int p, int y, float r);
        bankDeposit(int p, int y, int r);
        void show();
};

bankDeposit :: bankDeposit(int p, int y, float r){
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    } 
}

bankDeposit :: bankDeposit(int p, int y, int r){
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    } 
}

void bankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principle<<endl
    <<"Return after "<<years<<" years is "<<returnValue<<endl;
}

int main(){
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    bd3.show();
    cout<<"Enter p, y and r: "<<endl;
    cin>>p>>y>>r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();
    cout<<"Enter p, y and R: "<<endl;
    cin>>p>>y>>r;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}