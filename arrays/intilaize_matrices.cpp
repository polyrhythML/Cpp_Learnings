#include<iostream>
using namespace std;

int main()
{
// 2D arrays initialzation, cols shape is mandatory and not rows

int a[3][2] = {{1,3}, {2,3}, {3,2}};

// Uninitialized elements in the array are assigned a value of zero by default. Just like the 1D array.
int b[3][3] = {{1, 3}, {1,2}, {1}};

// Initialize an array with all zeros
int c[4][3] = {{0}};

cout<<"ARRAY A : "<<endl;
for(int i =0; i<3; i++)
{
for(int j =0; j<2; j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<"ARRAY B : "<<endl;
for(int i =0; i<3; i++)
{
for(int j =0; j<3; j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
cout<<"ARRAY C :"<<endl;
for(int i =0; i<4; i++)
{
for(int j =0; j<3; j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}



}
