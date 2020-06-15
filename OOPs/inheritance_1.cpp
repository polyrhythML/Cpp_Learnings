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

class Vehicle{

    private:
        int max_speed;
    protected:
        int num_tyres;
    public:
        
        std::string color;

        Vehicle(){
            std::cout<<"Vehicle constructor"<<std::endl;
        }

        Vehicle(int a, std::string name){

            std::cout<<"Vehicle Parameterized constructor"<<std::endl;
            num_tyres = a;
            color = name;
        }        

        ~Vehicle(){
            std::cout<<"Vehicle destructor called"<<std::endl;
        }
        

};

 
class Car : public Vehicle{
    
    private:
        int num_gears;

    public:

        // To instantiate the base class with parameterized constructor, we need to pass the constructor in the initialization list.
        Car(int num, std::string name, int y) : Vehicle(num, name){
            num_gears = y;
            std::cout<<"Car Parameterized constructor"<<std::endl;

        }

        ~Car(){
            std::cout<<"Car destructor called"<<std::endl;

        }
        void print(){
        std::cout<<"Num Tyres : "<<num_tyres<<std::endl;
        std::cout<<"Color : "<<color<<std::endl;
        std::cout<<"Num of gears : "<<num_gears<<std::endl;
        }
};


class Jaguar : public Car{

    public:
        Jaguar(int x, std::string name, int y): Car(x, name, y){

            std::cout<<"Jaguar constructor"<<std::endl;
        }

        ~Jaguar(){
            std::cout<<"Car destructor"<<std::endl;
        }
};

int main(){


    Vehicle V1;
    Jaguar J(6, "Blue", 4);
    J.print();
}