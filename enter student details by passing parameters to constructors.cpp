//C++ Program to enter student details by Passing parameters to constructors
#include<iostream>
using namespace std;

class student{
    private:
        char name[20];
        int roll;
    public:
        student();
        student(int a,char b[10]);
        ~student();
        void read();
        void disp();
};

student :: student(){
    cout<<"Default constructor is been called!!!"<<endl;
}

student :: student(int a,char b[10]){
    cout<<"Constructor is been called!!!"<<endl;
    roll = a;
    for(int i=0;i<6;i++){
        name[i] = b[i];
    }
}

void student :: read(){
    cout<<"Enter the student name:"<<endl;
    cin>>name;
    cout<<"Enter the student roll:"<<endl;
    cin>>roll;
}

void student :: disp(){
    cout<<"Student name is:"<<name<<endl;
    cout<<"Student roll is:"<<roll<<endl;
}

student :: ~student(){
    cout<<"Destructor is been called!!!"<<endl;
}

int main(){
    student s(3445,"zsdcfub");
    s.disp();
}