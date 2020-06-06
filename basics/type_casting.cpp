/**
There are two kinds of type casting

1. Implicit -> automatic type conversion -> done by the compiler
2. Explicit -> forcing a type conversion

*/

/*
Implicit :
char + int = int
int + float = float
int/float = float
int/int = int

char-> int-> float
bool -> char
bool -> int

*/

/*
Explicit Typecasting :

float to int
int to char
char to bool

These type casting are to be performed using a function.


*/

#include<iostream>
using namespace std;

int main()
{
    char c = 'a';
    cout<< c + 0<<endl;   // outputs : 97 -> Implicit type-casting
    char c2;
    c2 = c + 1;
    cout<<c2<<endl;             // output : b -> This prints the character

    // WRAP AROUND
    // char + char = int
    // 65 + 65 = 130
    // cout<<'A'+'A';
    // but char can store from -128 to +127, therefore 130 = 127 wrap around to -128 + 3 = -126
    // Similar Wrap around can be found in integer, float, other data types

    char c3;
    c3 = 'A'+'A';
    cout<<c3<<endl;

    int c4;
    float as = 1312.313;
    c4 = (int)as;
    cout<<c4<<endl;           // outputs : 1312
    // There is a problem here in explicit type casting,
    // When trying to convert int to char -> int is 4 bytes and char is 1 byte. So only 1 byte of the integer converted char is shown as output.

    cout<<5/9<<endl;            // output : 0
    cout<<9/5<<endl;            // output : 1
    cout<<9.0/5<<endl;          // output : 1.8
    cout<<5.0/9<<endl;          // output : 0.555556
    cout<<5.0/9.0<<endl;        // output : 0.555556
    return 0;


}


