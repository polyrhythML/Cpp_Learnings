#include<iostream>

using namespace std;

/*

Rules for naming a variable :
* should not start with a number ... 1_a -> wrong variable name
* It can have characters and numbers
* No spaces between the variable names

*/

int main()
{
    // integer requires 4 bytes of memory
    int i = 10;
    cout<<"Value of the variable i is "<<i<<endl;
    cout<<"Size of the i : "<<sizeof(i)<<endl;

    // short int -> 2 bytes
    short int a;
    a = 3;
    cout<<"Value of the variable a is "<<a<<endl;
    cout<<"Size of the a : "<<sizeof(a)<<endl;


    // long int -> 4/8 bytes
    // long long int -> 8 bytes for sure

    long long int b;
    cout<<"Value of the variable b is "<<b<<endl;
    cout<<"Size of the b : "<<sizeof(b)<<endl;

    //float -> 4 bytes
    float f;
    f = 1.23;
    cout<<"Value of the variable f : "<<f<<endl;
    cout<<"Size of the f : "<<sizeof(f)<<endl;
    // double -> 8 bytes
    double d;
    d = 1.23;
    cout<<"Value of the variable d : "<<d<<endl;
    cout<<"Size of the d : "<<sizeof(d)<<endl;

    // char -> 1 byte
    char c;
    c ='a';
    cout<<"Value of the variable c : "<<c<<endl;
    cout<<"Size of the c : "<<sizeof(c)<<endl;

    // bool -> 1 byte
    bool b1 ;
    b1 = true;
    cout<<"Value of the variable b : "<<b1<<endl;
    cout<<"Size of the b : "<<sizeof(b1)<<endl;

    // Garbage values
    // If you don't assign any value to the variable, a random value is printed
    int xx;
    cout<<xx<<endl;



return 0;
}
