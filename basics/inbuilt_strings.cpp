#include<iostream>
#include<cstring>

// strcmp -> compared the strings
// strcpy -> copy strings -> copies the null character also
// strlen -> length of a string
// strncpy -> copy only the first n characters
// strcat -> concatenate two strings -> strcat(string1, string2)

using namespace std;

int main()
{
char str1[100];
char str2[100];

cin.getline(str1, 20);
cin.getline(str2, 20);

if(strcmp(str1, str2) == 0){
cout<<"It is a match";

}
else
{cout<<"Not a match";}

}

