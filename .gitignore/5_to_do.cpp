//C++ Program to Show Counter using Constructors
#include<iostream>
using namespace std;

class area{
    public:
        int length;
        int breadth;
    void calculate(){
        cout<<"The area of the ractangle is :"<<length*breadth<<endl;
    }
    area(){
        cout<<"Default program is constructed!!!"<<endl;
    }
    area(int a,int b){
        cout<<"Program is constructed!!!"<<endl;
        length = a;
        breadth = b;
    }
    ~area(){
        cout<<"Destructed!!!"<<endl;
    }
};

int main(){
    area a1;
    area a2(2,4);
    a2.calculate();
    return 0;
}