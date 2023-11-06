//C++ program to Display Student Details using constructor and destructor
#include<iostream>
using namespace std;

class student{
    private:
        char name[20];
        int roll;
    public:
        student();
        ~student();
        void read();
        void disp();
};

student :: student(){
    cout<<"Default constructor is been called!!!"<<endl;
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
    student s;
    s.read();
    s.disp();
}








