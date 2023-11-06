//C++ Program to Show an Example demonstrating Order of constructor invocation
#include<iostream>
using namespace std;

class subject{
    private:
        int days;
        int subjectno;
    public:
        subject(int d,int sn);
        void print(){
            cout<<"Subject No: "<<subjectno<<endl;
            cout<<"Days: "<<days<<endl;
        }
};

subject :: subject(int d=123,int sn=101){
    cout<<"Constructing subject...."<<endl;
    days = d;
    subjectno = sn;
}

class student{
    int rollno;
    float marks;
    public:
        student(){
            cout<<"Constructing Student...."<<endl;
            rollno = 0;
            marks = 0.0;
        }
        void getvalue(){
            cout<<"Enter roll number:";
            cin>>rollno;
            cout<<"Enter marks:";
            cin>>marks;
        }
        void print(){
            cout<<"Roll no: "<<rollno<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

class admission{
    subject sub;
    student stud;
    float fees;
    public:
        admission(){
            cout<<"Constructing admission...."<<endl;
            fees = 0.0;
        }
        void print(){
            stud.print();
            sub.print();
            cout<<"Fees :"<<fees<<endl;
        }
};

int main(){
    admission adm;
    adm.print();
    cout<<"Back to main()...."<<endl;
    return 0;
}