#include<iostream>
using namespace std;


class Base {
    public:
    void display(){
        cout << "Display base"<<endl;
    }
    virtual void show(){
        cout << "Show base"<<endl;
    }
};

    class Derived : public Base{
        public:
        void display(){
            cout << "display derived"<<endl;
            
        }
        void show(){
            cout << "show derived"<<endl;
        }
    };

int main(){
    Base B;
    Derived D;
    Base *bptr;

    cout <<"bptr points to Base"<<endl;
    bptr = &B;
    bptr->display();
    bptr->show();

    cout<< "bptr points to Derived"<<endl;
    bptr = &B;
    bptr->display();
    bptr->show();

    return 0;

}