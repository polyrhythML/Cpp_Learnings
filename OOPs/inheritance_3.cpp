#include<iostream>

/*
    * The Hybrid inheritance has a Diamond problem.
    * If B and C inherit from A and D inherits from B and C, there ought to be some properties from A which will have double copies in D.
    * Virtual functions come to rescue, see main function for details.
    * Remember that default constructors of the base classes are called implicitly but if not present, then parameterized constructors have
    to be called explicitly for each base class.


*/

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

            std::cout<<"Vehicle Parameterized constructor : "<<a<<std::endl;
            num_tyres = a;
            color = name;
        }        

        ~Vehicle(){
            std::cout<<"Vehicle destructor"<<std::endl;
        }

        void print(){

            std::cout<<"Here we dine with Vehicle"<<std::endl;
        }
        

};

 
class Car : virtual public Vehicle{
    
    private:
        int num_gears;

    public:

        // To instantiate the base class with parameterized constructor, we need to pass the constructor in the initialization list.
        Car(){
            std::cout<<"Car default constructor"<<std::endl;

        }

        void print(){

            std::cout<<"Here we dine with Car"<<std::endl;
        }

        ~Car(){
            std::cout<<"Car destructor"<<std::endl;

        }
};


class Truck : virtual public Vehicle{

    public:
        Truck() {

            std::cout<<"Truck constructor"<<std::endl;
        }

        void print(){

            std::cout<<"Here we dine with Truck"<<std::endl;
        }

        ~Truck(){
            std::cout<<"Truck destructor"<<std::endl;
        }
};

class Bus : public Car, public Truck{
    public:
        // This also needs to call the Vehicle class's constructor because it is a virtual class of it.
        Bus(int a, std::string name): Vehicle(a, name){
            std::cout<<"Bus Constructor"<<std::endl;
        }

        void print(){

            std::cout<<"Here we dine with Bus"<<std::endl;
        }
        ~Bus(){
            std::cout<<"Bus destructor"<<std::endl;
        }
};

int main(){

    Bus b(5, "Blue");
    b.print(); // print from BUS
    b.Car::print();
    b.Truck::print();
    b.Vehicle::print(); 
    
    // With the use of the virtual keyword only one copy of the Vehicle class is called.
    
    // Due to the use of the virtual keyword, car and truck classes will have pointers pointing to the Vehicle class.

    // Thus Bus is able to call the vehicle class constructor object directly, not going via car or truck.
    return 0;
}