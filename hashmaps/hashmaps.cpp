/*
    * In arrays, a[i] = x , i only number, x = any data type value
    * In hashmaps, a[i] = x, i can be string, float, double, int , and x can be any value.
    * Use to perform operations like find, the most occurring character in a string.
    * Dictionaries in python uses hashmaps
    * Hashmaps can be implemented using linked list and Balanced BST.
    * Supported operaations :
    *   Add a key, val pair
    *   Delete a key val pair
    *   Update a key val pair
    * Hashmaps cannot have same two same keys.
    * 
    * C++ has two implementations of the hashmaps inbuilt
    *       Map -> BST(Binary seacrh tree) -> O(logN)
    *       Unordered map -> Hashtable -> O(1) -> const time operations

*/

#include<iostream>
#include<unordered_map>

int main(){

    std::unordered_map<std::string, int> mymap;

    // Insert
    std::pair<std::string, int> p("abc", 1);        // Method 1 to insert
    mymap.insert(p);

    mymap["def"] = 2;       // Exactly like array

    // Access Elements

    std::cout<<mymap["abc"];

    // A problem with hashmaps, compiler doesnot throw an exception if you try to access element with index operator, if the key doesnot exist

    //std::cout<<mymap.at("dfs");     // This gives an exception
    std::cout<<mymap["qwe"];        // Creates a new key and default the value to 0 -> this is not what we want

    // Use count method to check whether a key exists or not

    if(mymap.count("ryu") > 0){
        std::cout<<"The key exist";
    }else{
        std::cout<<"The key doesnot exist";
    }

    // Update the keys 

    mymap["abc"] = 20;

    // Delete an entry
    mymap.erase("abc");


    return 0;


}

