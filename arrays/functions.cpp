#include<iostream>
using namespace std;

int ret_sum(int n)
{
 int a[n];

 for(int i =0; i<=n;i++)
 {
    a[i] = i;
 }
int sum = 0;
for(int i = 0; i<n;i++)
{
sum +=a[i];
}

 return sum;
}

int main()
{
int n;
cout<<"Enter the number of elements"<<endl;
cin>>n;
int sum = ret_sum(n);

cout<<"The array sum : "<<sum;
}
