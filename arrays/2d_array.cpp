#include<iostream>
using namespace std;

int main(){

cout<<"Enter the  number of rows : ";
int m;
cin>>m;
cout<<endl;
cout<<"Enter the number of cols : ";
int n;
cin>>n;
cout<<endl;

int arr[m][n];

for(int i = 0; i<m; i++)
{
    for(int j = 0; j<n; j++)
    {
        arr[i][j] = (i+1)*j;
    }

}

// Row-wise print

cout<<"Row wise print the array : "<<endl;
for(int i = 0; i<m; i++)
{
    for(int j = 0; j<n; j++)
    {
        cout<<arr[i][j]<< " ";
    }

cout<<endl;
}


cout<<"Col wise print the array : "<<endl;
// Col wise
for(int i = 0; i<n; i++)
{
    for(int j = 0; j<m; j++)
    {
        cout<<arr[j][i]<< " ";
    }

cout<<endl;
}

}
