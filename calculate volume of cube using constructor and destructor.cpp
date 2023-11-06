//C++ Program to calculate Volume of Cube using constructor and destructor
#include<iostream>
using namespace std;

class volume{
    public:
        int side;
        void calculate(){
            cout<<"The volume of the cube is: "<<side*side*side<<endl;
        }
        volume(){
            cout<<"Default program is constructed!!!"<<endl;
        }
        volume(int a){
            cout<<"Program is constructed!!!"<<endl;
            side = a;
        }
        ~volume(){
            cout<<"Destructed!!!"<<endl;
        }
};

int main(){
    volume c;
    volume c2(4);
    c2.calculate();
    return 0;
}