// #include<iostream>
// using namespace std;

// class B{
//     int a;
//     public:
//     int b;
//     void set_ab();
//     int get_a(void);
//     void show_a(void);
// };

// class D : public B
// {
//     int c;
//     public:
//     void mul(void);
//     void display(void);

// };

// void B :: set_ab(void){
//     a = 5; b = 10;
// }
// int B :: get_a(){
//     return a;

// }

// void B :: show_a(){
//     cout << "a = "<< a <<endl;
// }

// void D :: mul(){
//     c = b * get_a();
// }

// void D :: display(){
//     cout<<"a = "<<get_a()<<endl;
//     cout<<"b = "<<endl;
//     cout <<"c "<<endl;
// }

// int main(){

//     D d;
//     d.set_ab();
//     d.mul();
//     d.show_a();
//     d.display();

//     d.b = 20;
//     d.mul();
//     d.display();

//     return 0;

// }

#include<iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
