//C++ Program to Display Date using Constructors
#include<iostream>
using namespace std;

class date{
    private:
        int dd,mm,yy;
    public:
        void print(){
            cout<<dd<<":"<<mm<<":"<<yy<<endl;
        }
        date(){
            cout<<"Default constructor is been called!!!"<<endl;
        }
        date(int a,int b,int c){
            cout<<"Constructor is been called!!!"<<endl;
            dd = a;
            mm = b;
            yy = c;
        }

};

int main(){
    //date d;
    date d2(12,3,2004);
    d2.print();
    return 0;
}