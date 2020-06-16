#include<iostream>

/*
    * COMPILE TIME POLYMORPHISM CASES
    * Compile time polymorphism is decided before hand
    * Function overloading and operator overloading are the examples of it.
    * Functions can only be differentiated with the help of number and type of arguments and NOT BY THE RETURN TYPE.
    * 
    * REMEMBER WHENEVER A BASE CLASS POINTER POINTS TO THE CHILD CLASS OBJECT, IT IS ABLE TO ACCESS ONLY THE BASE CLASS PROPERTIES.

*/

/*
    RUN TIME POLYMORPHISM
    * Decisions at run time.
    * Make use of the virtual function in base class to overide the call to the child class's method, when it also exists in the base class. 

*/

/*
    * Pure virtual function -> No definition.
    * If a class contains a pure virtual function, it becomes an abstract class means the class is not complete(since it doesnot have
    complete definition of the virtual function)
    * Cannot create object of Abstract classes
    * Pure Abstract class -> When all the function of the class are pure virtual function
    * 
    * Friend function donot have access to the this operator since they are not part of any class.
    * Friend functions can be defined under any access modifier(can be public, protected and private).
    * Friend class can access all the properties of the another class which was not possible with inheritance.
    * Friendship is oneway!!


*/