#include<iostream>
#include<vector>

/*
    * It supports the dynamic array implementation.
    * No fixed size required
    * Implemented using templates
    * Static as well as dynamic allocations are supported.
    * The dynamic vector allocation are continguous memory, there iterate and perform operations are faster compared to the stack allocated
    vectors(stored in the fragments).
    * The copy and resize of the array is in efficient as it resizes the vector and copies all the exisiting elements and pushes them to 
    a resized vector allocation.
    * use of emplace_back()
    * use of reserve()
    * video for reference : https://www.youtube.com/watch?v=HcESuwmlHEY

*/

int main(){

    // dynamic vector declaration
    std::vector<int> *vp = new std::vector<int>;

    // static vector declaration
    std::vector<int> v;

    // insert values 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i = 0; i < v.size(); i++){
        std::cout<<std::endl;
        std::cout<<v[i];
    }

    // Checking a value at an index

    std::cout<<v.at(2);
    std::cout<<v.at(1);
    // std::cout<<v.at(4);     It the compiler will throw an error terminate called after throwing an instance of 'std::out_of_range'.
    std::cout<<v[5];           // No error here

    // v[4] -> no error thrown by the compiler, but a garbage value is accessed and printed, which doesnot belong to us.


    // remove the last element of the vector 

    v.pop_back();

    for(int i = 0; i < v.size(); i++){
        std::cout<<std::endl;
        std::cout<<v[i];
    }
    
    // size -> current number of elements in the vector.
    // capacity -> currently maximum number of elements that the vector can hold.
    std::cout<<std::endl;
    std::cout<<v.capacity();    // 4
    std::cout<<v.size();        // 2

    
    return 0;


}