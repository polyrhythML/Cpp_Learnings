#include<iostream>
using namespace std;
// First class -> user defined data type

/**
Constructor - used to initialize the properties of a class -> same name as the class name -> no return type

default constructor -> default values are garbage. 

Remember default destructors can only deallocate memory for static objects.
The dynamic objects are referenced using a pointer variable, and therefore have to manually deleted.
*/

class Product{

public:
    
    // Default constructor
    Product(){
        cout<<"Default constructor is called"<<endl;
    }
    // Parameterized constructor
    Product(int i, int j){
        cout<<"Parameterized constructor is called"<<endl;
        cout<<"Get the reference of the memory address at which this constructor is stored"<<this<<endl;
        cout<<"Get the reference(*this) of the memory address at which this constructor is stored"<<this<<endl;
        this->id = i;
        price = j;    
    }
    int id;
    int price;

    // Let's define getter and setter function
    void getter(){
        cout<<"Accessing the private variable id : "<<id;
        cout<<endl;
        cout<<"Accessing the private variable price : "<<price;
    }

    void setter(){
        id = 23;
        cout<<"Changed the value of the id : "<<id;

    }

    ~Product(){
        cout<<"Destroying object at : "<<this<<endl;
    }    

private:
    int age;

};