// #include<iostream>
// using namespace std;

// class Complex{
//      friend Complex sumComplex(Complex o1, Complex o2);
//     int a, b;

//     public:
//     void setNumber(int n1, int n2){
//         a = n1;
//         b = n2;
//     }

//     void printNumber(){
//         cout << "Your number is " << a << " + " << b << " i "<<endl;
//     }
// };

// Complex sumComplex(Complex o1, Complex o2){
   
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;



// }

// int main(){

// Complex c1, c2 ,sum;
// c1.setNumber(1,4);
// c1.printNumber();

// c2.setNumber(5,8);
// c2.printNumber();

// sum  = sumComplex(c1,c2);
// sum.printNumber();

// return 0;




// }



#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void puttime()
    {
        cout << hours << " hours and ";
        cout << minutes << " minutes" << "\n";
    }

    friend void sum(Time t1, Time t2, Time &result);
};

void sum(Time t1, Time t2, Time &result)
{
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
}

int main()
{
    Time T1, T2, T3;

    T1.gettime(2, 45);
    T2.gettime(3, 30);

    sum(T1, T2, T3);

    cout << "T1 = ";
    T1.puttime();

    cout << "T2 = ";
    T2.puttime();

    cout << "T3 = ";
    T3.puttime();

    return 0;
}