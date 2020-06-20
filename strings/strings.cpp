#include<iostream>
#include<vector>
#include <algorithm>
#include<cstdlib>

/*
    * String as a datatype
    * It can overcome the problem of characters with null character handling.
    * For multiple line of strings, you will have to create 2d character array not a easy approach.
    * Better go with vector of strings -> each entry as a string int the vector.

*/

int main(){

    std::string s = "avc";
    std:: string *s2 = new std::string;
    s2 = &s;
    std::cout<<s;       // console output string s
    std::cout<<*s2;     // deference the value 
    std::cout<<s2;      // address of s

    std::vector<std::string> v;
    v.push_back(s);
    v.push_back("hello"); 

    // print the content of the vector 

    for(int i = 0; i < v.size(); i++){
        std::cout<<std::endl;
        std::cout<<v[i];
        // sort each string
        std::sort(v[i].begin(), v[i].end()); 
        std::cout<<v[i];
    }

    // How to get the variable length string input.
    // Here we cannot use cin.getline() since we don't know the length of the string before hand and therefore, getline comes to the rescue.
    std::string str;
    std::getline(std::cin, str);
    std::cout<<str;

    // access element of a string

    std::cout<<s[0];    // character at the zeroth index

    // Change the element 

    s[0] = 'e';

    // Add two strings 

    std::string new_string;

    new_string = s + str + "This";   // concatenate operation

    std::cout<<new_string;

    // get the size of the string

    std::cout<<new_string.size();
    std::cout<<new_string.length();

    // Sub string
    std::cout<<std::endl;
    std::cout<<new_string.substr(4);    // Starting from the element at index 4 it returns the whole string till the end
    std::cout<<std::endl;
    std::cout<<new_string;
    std::cout<<std::endl;
    std::cout<<new_string.substr(4, 3);    // Starting from the element at index 4 it returns character at 3, 4 and 5th index. (3 elements)
    std::cout<<std::endl;
    std::cout<<new_string;

    // Find a sub string in the string

    std::string str2;
    str2 = "abxab3abcdfabhgabc";
    std::cout<<str2.find("abc");        // return the index of the first instance of substring abc -> 6

    // Convert to string

    int a = 123;

    std::string s3 = std::to_string(a);

    // convert string back to integer

    int b;
    b = std::atoi(s3.c_str());

    // insert elements in a string
    s3.push_back('e');


}