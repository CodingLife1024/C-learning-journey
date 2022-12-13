#include<iostream>
using namespace std;

// class Employee{
//     int ID;
//     int salary;
//     public:
//         void setID(void){
//             salary = 122;
//             cout<<"Enter employee ID: "<<endl;
//             cin>>ID;
//         }
//         void getID(void){
//             cout<<"The employee ID is: "<<ID<<endl;
//         }
// };

// int main(){
// //     Employee Harry, Rohan;
// //     Harry.setID();
// //     Harry.getID();
//     Employee fb[10];
//     for(int i = 0; i < 10; i++){
//         fb[i].setID();
//         fb[i].getID();
//     }
//     return 0;
// }

class complex{
    int a, b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void getData(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + i"<<b<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 3);
    c1.printNumber();
    c2.setData(5, 7);
    c2.printNumber();
    c3.getData(c1, c2);
    c3.printNumber();
    return 0;
}