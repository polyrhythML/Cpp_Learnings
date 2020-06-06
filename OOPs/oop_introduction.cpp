#include<iostream>
#include "def_class.cpp"
using namespace std;



/**
 
Datatype Product will have a size of 4(id) + 4(price) = 8 bytes. 
Here we can create objects dynamically

Static memory allocation for the objects :

Product p1; -> This is allocated on the stack
Product p2;

Dynamic memory allocation : 

Product * p3 = new Product; -> This is allocated on the heap

p3 is a pointer pointing to a class object, again the pointer will be stored in the stack while the class object will be on heap.


Access Modifiers -> defines what properties and functions of a class can be accessed where.
 */

int main(){

// Static object
Product p1;
Product p2(12, 14);

// Dyamic objects
Product * p3 = new Product(56, 14);

// Setting properties values 

p1.Product::id = 10;
p1.Product::price = 20;
cout<<p1.id;

// setting properties for the dynamic variable 

(*p3).id = 11;      // p3->23    is also same thing 
(*p3).price = 12;   // p3->price is also same thing

// copy constructor
// Create static constructor using static object
Product p4(p2);
p4.getter();

// Copy constructor Dynamic
// Create Static Constructor using dynamic object
Product p5(*p3);
p5.getter();

// Copy Constructor
// Create dynamic constructor using dynamic object
Product *p6 = new Product(*p3);
p6->getter();

cout<<endl;
cout<<"value of the dynamica class object : "<<p3->price;
cout<<endl;
p3->getter();
cout<<endl;
p3->setter();
cout<<endl;

// Manually delete the dynamically defined objects.
// p1, p2, p4, p5 -> handled by the destructor of the class.
delete p3;
delete p6;

};