// #include<iostream>
// using namespace std;

// class complex{
//     float x;
//     float y;
//      public:
//      complex(){}
//      complex (float real, float imag){
//         x = real;
//         y = imag;
//      }
//      complex operator+(complex);
//      void display(void);
// };

// complex complex :: operator+(complex c){
//     complex temp;
//     temp.x = x + c.x;
//     temp.y = y + c.y;
//     return(temp);
// }
// void complex :: display(void){
//     cout << x << " + j " << y <<endl;
// }

// int main(){

//     complex c1,c2,c3;
//     c1 = complex(2.5, 3.5);
//     c2  =complex(4.5, 6.7);
//     c3 = c1+c2;

//     cout << "C1 = ";
//     c1.display();

//     cout << "C2 = ";
//     c2.display();

//     cout << "C3 = ";
//     c3.display();

//     return 0;

// }

#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    Time operator+(const Time &t) const
    {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void puttime() const
    {
        cout << hours << " hours and ";
        cout << minutes << " minutes" << "\n";
    }
};

int main()
{
    Time T1, T2, T3;

    T1.gettime(2, 45);
    T2.gettime(3, 30);

    T3 = T1 + T2;

    cout << "T1 = ";
    T1.puttime();

    cout << "T2 = ";
    T2.puttime();

    cout << "T3 = ";
    T3.puttime();

    return 0;
}
