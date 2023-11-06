//C++ Program For Constructor with Two Parameters
#include<iostream>
using namespace std;

class para{
    private:
        int roll;
        char name[20];
    public:
        para(int a,char b[20]){
            roll = a;
            for(int i=0;i<6;i++){
                name[i] = b[i];
            }
        }
        void print(){
            cout<<"Student name is :"<<name<<endl;
            cout<<"Student roll is :"<<roll;
        }
};

int main(){
    para s1(23,"shre");
    s1.print();
    return 0;
}