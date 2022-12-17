#include<iostream>
#include<cmath>
using namespace std;

//multi-level inheritance

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
};

void Student :: get_roll_number(void){
    cout<<"The roll number is :"<<roll_number<<endl;
};

class Exam: public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(void){
    cout<<"The marks in maths: "<<maths<<endl;
    cout<<"The marks in physics: "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_results(){
            get_roll_number();
            get_marks();
            cout<<"The result is: "<<(maths + physics)/2<<"%"<<endl;
        }
};

int main(){
    Result hrry;
    hrry.set_roll_number(434);
    hrry.set_marks(92.0, 94.0);
    hrry.display_results();
    return 0;
}