//C++ Program to demonstrate Constructor Overloading
#include<iostream>
#include<stdlib.h>
using namespace std;

class deposit{
    long int principal;
    int time;
    float rate;
    float totalamount;
    public:
        deposit();
        deposit(long p,int t,float r);
        deposit(long p,int t);
        deposit(long p,float r);
        void calculateamount(void);
        void display(void);
};

deposit :: deposit(){
    principal = time = rate = 0.0;
}

deposit :: deposit(long p,int t,float r){
    principal = p;
    time = t;
    rate = r;
}

deposit :: deposit(long p,int t){
    principal = p;
    time = t;
    rate = 0.08;
}

deposit :: deposit(long p,float r){
    principal = p;
    time = 2;
    rate = r;
}

void deposit :: display(void){
    cout<<"\nPrincipal Amount :: Rs."<<principal<<"\n";
    cout<<"\nNo.of years :: "<<time<<" years\n";
    cout<<"\nRate of interest :: "<<rate<<"\n";
    cout<<"\nTotal Amount :: Rs."<<totalamount<<"\n";
}

int main(){
    deposit d1;
    deposit d2(2000,2,0.04f);
    deposit d3(4000,1);
    deposit d4(3000,0.12f);      

    d1.calculateamount();
    d2.calculateamount();
    d3.calculateamount();
    d4.calculateamount();

    cout<<"Object D1 Details :: ";
    d1.display();
    cout<<"Object D2 Details :: ";
    d2.display();
    cout<<"Object D3 Details :: ";
    d3.display();
    return 0;
}