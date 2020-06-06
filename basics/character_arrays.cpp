#include<iostream>
using namespace std;

/**
* Character array are a bit of different case.
unlike arrays here we dont need for loop to assign the values
cin>>b where b = hello automatically becomes an array

* Similarly, for the output of the array, no need to loop over.
cout>>b -> print hello as the output.

* The null character is appended at the end of each of the character array.
Total length of the array is character array + 1
Null character is a terminator -> stop printing.

*/

/**

cin vs cin.getline()

* cin can read characters more than the specified length of the array
For eg, char a[5]
cin>>name - > it can take input of lenght greater than 4 and not give error

* doesnot read spaces also
cin>>name
name = "dfaoi adpfoa "
output : dfaoi and not dfaoi adpfoa

We can overcome these errors by using cin.getline()

cin.getline(name, 100, 'o')
third argument is delimiter -> which is the break point of the string i.e. at what point to end the string.
above case, when we right hellddfaoffafd,
The string is read till hellddfao only.
*/

int char_count(char input[])
{

int count = 0;
for(int i = 0; input[i] != '\0'; i++)
{count ++;}
return count;

}


int main()
{
char name[100];
cout<<"Enter your name : ";
cin.getline(name, 100, 'o');
cout<<name;


}
