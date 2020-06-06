#include <iostream>
using namespace std;

int main(){



	int m; 
	int n; 

	cout<<"Enter the rows : ";
	cin>>m;
	cout<<endl;
	cout<<"Enter the number of cols : ";
	cin>>n;
	// A pointer of pointer array
	int ** p = new int *[m];

	for(int i = 0; i<m;i++)
	{
		p[i] = new int[n];
		for(int j=0; j<n; j++)
		{

			cin>>p[i][j];
		}

	}


return 0;

}
