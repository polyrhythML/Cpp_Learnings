#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
bool isAlargest = ((a>b) && (a>c));
cout<<isAlargest<<endl;

cout<<((a>b) || (a>c))<<endl;
cout<<(!(a>=b))<<endl;
}
