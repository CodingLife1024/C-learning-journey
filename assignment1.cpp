#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class SimpleCalculator{
    protected:
        int num1, num2;
        int add, sub, mult;
        float div;
    public:
        void set_info_sim(int a, int b){
            num1 = a;
            num2 = b;
        }
        void assign_info_sim(){
            add = num1 + num2;
            sub = num1 - num2;
            mult = num1 * num2;
            div = (float)num1/num2;
        }
        void display_info_sim(){
            cout<<"The addition is: "<<add<<endl;
            cout<<"The subtraction is: "<<sub<<endl;
            cout<<"The multiplication is: "<<mult<<endl;
            cout<<"The division is: "<<div<<endl;
        }
};

class ScientificCalculator{
    protected:
        int num3, num4;
        int sq3, sq4, cu3, cu4, qu3, qu4;
        float srt3, srt4;
    public:
        void set_info_sci(int a, int b){
            num3 = a;
            num4 = b;
        }
        void assign_info_sci(){
            sq3 = num3 * num3;
            cu3 = num3 * num3 * num3;
            qu3 = num3 * num3 * num3 * num3;
            srt3 = sqrt(num3);
            sq4 = num4 * num4;
            cu4 = num4 * num4 * num4;
            qu4 = num4 * num4 * num4 * num4;
            srt4 = sqrt(num4);
        }
        void display_info_sci(){
            cout<<"The squares are: "<<sq3<<" and "<<sq4<<endl;
            cout<<"The cubes are: "<<cu3<<" and "<<cu4<<endl;
            cout<<"The quads are: "<<qu3<<" and "<<qu4<<endl;
            cout<<"The square roots are: "<<srt3<<" and "<<srt4<<endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    public:
		void set(int a, int b){
			set_info_sim(a, b);
			set_info_sci(a, b);
		}
		void process(void){
			assign_info_sim();
			assign_info_sci();
		}
		void display(void){
			display_info_sim();
			display_info_sci();
		}
};

int main(){
    SimpleCalculator a;
    a.set_info_sim(4, 8);
    a.assign_info_sim();
    a.display_info_sim();
    ScientificCalculator b;
    b.set_info_sci(3, 4);
    b.assign_info_sci();
    b.display_info_sci();
    HybridCalculator c;
    c.set(3, 4);
    c.process();
    c.display();
    return 0;
}