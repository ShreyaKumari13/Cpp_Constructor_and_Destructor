//C++ Program To calculate Volume of Box using Constructor
#include<iostream>
using namespace std;

class volume{
    public:
        int length;
        int width;
        int heigth;
        volume(int a,int b,int c){
            length = a;
            width = b;
            heigth = c;
        }
        void show(){
            cout<<"The volume of the box is : "<<length*width*heigth<<endl;
        }
};

int main(){
    volume v(2,3,4);
    v.show();
    return 0;
}