// #include<iostream>
// using namespace std;
//  int count = 0;

//  class num{
//     public:
//     num(){
//         count++;
//         cout<<"Constructor is called"<<count<<endl;
//     }
//     ~num(){
//         cout<<"Destructor is called"<<count<<endl;
//         count--;
//     }
//  };
// int main(){
//     cout<<"We are inside our main function"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout << "Entering  this block"<<endl;
//         cout << "Creating two more objects"<<endl;
//         num n2,n3;
//         cout<<"Exiting this block"<<endl;

//     }
//     cout<<"Back to main"<<endl;
//     return 0;


// }
#include<iostream>
using namespace std;
class test{
    int *a;
    public:
    test(int size){
        cout<<"Constructor Msg : Integer array of size"<<size<<endl;
    }
    ~test(){
        delete a;
        cout <<"Destructor Msg : Free up the memory allocated ffor integer array";
    }
};

int main(){
    int s;

    cout<<"Enter the size of array"<<endl;
    cin>>s;
    cout<<"Creating an object of test class ";
    test T(s);

    cout<<"Press any key to end the programme"<<endl;

    return 0;
}



