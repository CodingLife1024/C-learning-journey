#include<iostream>
#include<cmath>
using namespace std;

// class Complex{
//     int a, b;
//     public:
//         void printData(){
//             cout << "The number is " << a << " + " << b << "i" << endl;
//         }
//     Complex(int, int);
// };

// Complex ::Complex(int x, int y){
//     a = x;
//     b = y;
// };

// int main(){
//     Complex a(3, 5);
//     Complex b = Complex(7, 8);
//     a.printData();
//     b.printData();
//     return 0;
// }

class Point{
    int x, y;
    friend void distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is: ("<<x<<", "<<y<<")"<<endl;
        }
};

void distance(Point p1,Point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<< "The difference is : "<<diff<<endl;
}

int main(){
    Point p(0, 4);
    Point q(3, 0);
    p.displayPoint();
    q.displayPoint();
    distance(p, q);
    return 0;
}