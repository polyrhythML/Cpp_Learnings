#include<iostream>
#include<cmath>
using namespace std;

int main(){

int a ;
int b;
cout<<"Enter number a : "<<endl;
cin>>a;
cout<<"Enter number b : "<<endl;
cin>>b;

int sum = 1;
for(int i = 0; i<b; i++)
    {
    sum *= a;
    }

cout<<sum<<endl;
cout<<pow(a,b)<<endl;

}
