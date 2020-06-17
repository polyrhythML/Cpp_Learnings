/*

 * A class inherited in the public mode : public properties become public and protected properties become protected.
 * A class inherited in the protected mode : public properties become protected and protected properties becomes protected itself.
 * A class inherited in the private mode : public properties becomes private and protected properties becomes private.
 *
 * Private properties don't participate in the inheritance!!
 * Default access specifier is private
 * 
 * A -> B -> C then A constructor called, then B and then C constructor called ---> order of constructers calls
 * 
 * A default constructor of the base class is inherited by default, if it is not defined then an explicit call to the parameterized constructor
 is mandatory.
 *
 * A class can call the constructor of its immediate parent. 
*/


#include<iostream>

 
int main(){


    Vehicle V1;
    Jaguar J(6, "Blue", 4);
    J.print();
}