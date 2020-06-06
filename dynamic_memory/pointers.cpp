/**
Compiler creates a symbol table where the memory address corresponding to each of the variable is stored.
& -> address of operator used to fetch the memory address of a variable
Addresses are stored in hexadecimal system.

Pointer is a data type used to store the addresses of other variables.

We cannot declare a pointer as such, pointer p because we don't have information on how much many bytes to read.
Therefore pointers are declared with the type of variable it has to point to.
int *p = &i;
Here we see, we are pointing to a variable of type int, therefore we will be reading 4 bytes.

*/


#include<iostream>
using namespace std;

int main(){

int x = 0;

int * p = &x;

cout<<p<<endl;
cout<<&x<<endl;
cout<<sizeof(p)<<endl;  // s8
cout<<sizeof(&x)<<endl; // 8

char c = 'e';
char * p2 = &c;
cout<<sizeof(p2)<<endl; // 8

/**
What you see here is that the pointer for char and int both have the same size, this is because both of them are storing starting addresses and have a fixed byte representation.
This number of bytes to represent the pointer varies from compiler to compiler and platforms.

There are two ways to access a memory , simple variable i , and use
*/
cout<<*p;  // -> this is "Deference operator", getting the value at a memory address

/**
NEVER DEREFERENCE ANY GARBAGE ADDRESS, SO ALWAYS INITIALIZE YOUR POINTER TO NULL
*/

}
