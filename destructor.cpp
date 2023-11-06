//C++ Program to Show an Example of Destructor
#include<iostream>
using namespace std;

class oye{
    public:
        oye(){
            cout<<"Constructor!!!"<<endl;
        }
        ~oye(){
            cout<<"Destructor!!!";
        }
};

int main(){
    oye s;
    return 0;
}