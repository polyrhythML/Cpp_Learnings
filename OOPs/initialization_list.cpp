#include<iostream>
#include<cstring>

/*

* Initialization lists are used to initialize const properties and referenc properties of a class at the time of the memory allocation.

* By the time constructor is invoked, a memory space is already allocated to all object of the class based on all the properties and we cannot initialize
a const variable or a reference variable.

* This is where Initialization lists comes in handy. 

*/

class Student{
    
    private:
        int age;
        const int roll;
        int &x;
    
    public:

        /// List Initialization usage
        Student(int r, int age): roll(r), x(this->age){
            this->age = age;
        }

        void print(){

            std::cout<<age<<" "<<roll<<" "<<x;
            std::cout<<std::endl;
        }

};


int main(){

    Student s1(12, 13);
    s1.print();
}
