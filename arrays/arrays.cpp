#include<iostream>
using namespace std;


int main(){

int n;
cout<< "Enter the length of the array";
cin>>n;
int b[n];
// maximum in an array
for(int i =0;i<n;i++)
{
cout<<"Enter the element";
cin>>b[i];
}

int max_val = 0;

for(int i = 0; i<n;i++)
{
if (b[i]>max_val)
    {
        max_val = b[i];
    }
}

cout<<"Max value of the array : "<<max_val;

}

// Uninitialized arrays have by default garbage values
// Initialized arrays with some elements intialized have non initialized array elements assigned with zero
