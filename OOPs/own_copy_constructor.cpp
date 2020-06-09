#include<iostream>
#include<cstring>

class Example{

    private:
        char *name;
        int age;
    
    public:

        /// parameterized constructor
        Example(int age, char *name){

            this->age = age;
            this->name = name;

        }

        /// own copy constructor, since constructor by default creates a shallow copy
        /// we will pass just the reference of the copy constructor to be used.
        Example(Example const &e){

            this->age  = e.age;
            this->name = new char[strlen(e.name) + 1];
            strcpy(this->name, e.name);

        }

        void print(){

            std::cout<<name<<" "<<age; 
        }

        void change_zero(){

            this->name[0] = 'o';
        }

};


int main(){

char name[] = "amit";
Example e1(10, name);
Example e2(e1);


e1.print();
std::cout<<std::endl;
e2.print();
std::cout<<std::endl;
e2.change_zero();
e2.print();
    
}