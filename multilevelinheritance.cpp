#include<iostream>
using namespace std;

 class student{
        protected:
        int roll_number;
        public:
        void  get_number(int);
        void put_number(void);
    };

    void student :: get_number(int a){
        roll_number = a;

    }

    void student :: put_number(){
        cout << "Roll Number: "<<roll_number<<endl;
    }

    class test : public student{
        protected:
        float sub1;
        float sub2;
        public:
        void get_marks(float, float);
        void put_marks(void);
    };

    void test :: get_marks(float x, float y){
        sub1 = x;
        sub2 = y;
    }
    void test :: put_marks(){
        cout<< "Marks in SUB1 = "<<sub1 <<endl;
        cout<< "Marks in SUB2 = "<<sub2 <<endl;
    }

    class result : public test{
        float total;
        public:
        void display(void);
    };
    void result :: display(void){
        total = sub1 + sub2;
        put_number();
        put_marks();
        cout << "Total = "<<total<<endl;
    }

int main(){

    result student1;

    student1.get_number(111);

    student1.get_marks(75.0, 59.5);

    student1.display();

    return 0;
   
    
}

// #include <iostream>
// using namespace std;

// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };

// void Student ::set_roll_number(int r)
// {
//     roll_number = r;
// }

// void Student ::get_roll_number()
// {
//     cout << "The roll number is " << roll_number << endl;
// }
// class Exam : public Student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };

// void Exam ::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void Exam ::get_marks()
// {
//     cout << "The marks obtained in maths are: " << maths << endl;
//     cout << "The marks obtained in physics are: " << physics << endl;
// }
// class Result : public Exam
// {
//     float percentage;

// public:
//     void display_results()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
//     }
// };
// int main()
// {
//     Result yash;
//     yash.set_roll_number(42);
//     yash.set_marks(94.0, 90.0);
//     yash.display_results();
//     return 0;
// }

