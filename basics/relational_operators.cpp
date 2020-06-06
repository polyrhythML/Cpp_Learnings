#include<iostream>
using namespace std;

int main()
{

int i, j;
cin>>i>>j;

bool isEq  = (i==j);
bool nEq = (i!=j);
bool isgr = (i>j);
bool isgrEq = (i>=j);
bool isless = (i<j);
bool islessEq = (i<=j);

cout<<"Is equal"<<isEq<<endl;
cout<<"Is Not equal"<<nEq<<endl;
cout<<"Is greater"<<isgr<<endl;
cout<<"Is greater equal"<<isgrEq<<endl;
cout<<"Is less"<<isless<<endl;
cout<<"Is less equal"<<islessEq<<endl;

}
