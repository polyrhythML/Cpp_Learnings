#include<iostream>
using namespace std;

int main()
{
int a = 1;
cout<<a<<endl;
// pre increment , increment and then assign
int x = ++a;
cout<<x<<endl;
// post increment, assign and then increment
int y = a++;
cout<<y<<endl;
cout<<a<<endl;

// Similary post and pre decrement operators work
x = --a;
cout<<a<<endl;
cout<<x<<endl;
y = a--;
cout<<a<<endl;
cout<<y<<endl;
}
