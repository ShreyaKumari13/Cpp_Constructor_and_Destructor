//C++ Program to Show Overload Constructor Example
#include<iostream>
using namespace std;

class test{
    private:
        int a;
        char b;
        double c;
    public:
        test(int q){
            a = q;
            b = '0';
            c = 0;
        }
        test(char q){
            a = 0;
            b = q;
            c = 0;
        }
        test(double q){
            a = 0;
            b = '0';
            c = q;
        }
        test(int d,char e,double f){
            a = d;
            b = e;
            c = f;
        }
        void show(){
            cout<<"\nValue of a: "<<a<<endl;
            cout<<"\nValue of b: "<<b<<endl;
            cout<<"\nValue of c: "<<c<<endl;
        }
};

int main(){
    test q1(5);
    test q2('t');
    test q3(3.14);
    test q4(4, 'y', 3.45);
    q1.show();
    q2.show();
    q3.show();
    q4.show();
    return 0;
}