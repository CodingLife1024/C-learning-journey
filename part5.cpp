#include<iostream>
using namespace std;

struct employee{
    /* data */
    int eID;
    char favChar;
    float salary = 66;
};

union money{
    /* data */
    int rice;
    char car;
    float pounds;
};


// int main(){
//     struct employee hater;
//     hater.eID = 1;
//     hater.favChar = 'c';
//     hater.salary = 33.33;
//     cout<<hater.salary;
//     return 0;
// }

// int main(){
//     union money m1;
//     m1.rice = 34;
//     m1.car ='c';
//     m1.pounds = 3400;
//     cout<<m1.pounds;
//     return 0;
// }

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<m1;
    return 0;
}