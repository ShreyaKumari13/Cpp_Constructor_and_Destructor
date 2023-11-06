//C++ Program to show Example of Default copy constructor
#include<iostream>
using namespace std;

class book{
    private:
        int pages;
        char title[3];
    public:
        book(int q,char w[3]){
            pages = q;
            for(int i=0;i<3;i++){
                title[i] = w[i];
            }
        }
        void show(){
            cout<<"Title of book :"<<title<<endl;
            cout<<"No.of pages :"<<pages<<endl;
        }
};

int main(){
    book b1(25,"C++");
    book b2(b1);
    book b3 = b1;

    cout<<"Detail of b1 :"<<endl;
    b1.show();
    cout<<"\nDetail of b2 :"<<endl;
    b2.show();
    cout<<"\nDetail of b3 :"<<endl;
    b3.show();
    return 0;
}