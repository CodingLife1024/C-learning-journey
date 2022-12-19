#include<iostream>
#include<cmath>
using namespace std;

/*
Student --> Test
Student --> Sports
Test --> Result
Sports --> Result
*/

class Student{
    protected:
        int roll_number;
    public:
        void set_number(int a){
            roll_number = a;
        }
        void print_number(){
            cout<<"The roll number is: "<<roll_number<<endl;
        }
};

class Test: virtual public Student{
    protected:
        float maths, physics;
    public: 
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"The marks are: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float a){
            score = a;
        }
        void print_score(){
            cout<<"The sports score is: "<<score<<endl;
        }
};

class Result: public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){
    Result hrry;
    hrry.set_number(25);
    hrry.set_marks(78.5, 89.5);
    hrry.set_score(28.0);
    hrry.display();
    return 0;
}