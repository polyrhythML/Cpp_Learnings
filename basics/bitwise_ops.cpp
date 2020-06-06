#include<iostream>
using namespace std;

// bitwise operation of bitwise and, bitwise or

// Converts the decimal numbers to binary and then performs bitwise operation and returns back result in decimal system.

int main()
{
//bitwise and
cout<<(4&1)<<endl;
//bitwise or
cout<<(5|3)<<endl;
//bitwise not
cout<<(~5)<<endl;
// bitwise
// a ^ a = 0
// a ^ 0 = a
cout<<(5^3)<<endl;

// left shift -> shift all the bits to left and add 0 for once -> 2<<1
// 0 0 0 0 1 0 -> 0 0 0 1 0 0
// left shift all the bits to the left three times and return output in decimal
cout<<(2<<3)<<endl;
// Similar Right shift
cout<<(3>>2)<<endl;

/**
formuales :

x<<y = x.2^y
x>>y = x/(2^y)
/

}
