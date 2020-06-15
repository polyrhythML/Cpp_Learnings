#include<iostream>


/*
 * Different types of inheritances 
 * Single Inheritance A -> B
 * Multilevel inheritance A -> B -> C -> D
 * Hierarchical inheritance A base class of B, C, D
 * Multiple Inheritane A, B, C inherited by D
 * Hybrid Inheritace  A inherited by B and C. and D inherits B and C. (Hierarchical Inheritance + Multiple Inheritance)

*/


class Teacher{

    public:
        int age;
    void print(){
        std::cout<<"Teacher"<<std::endl;
    }
};

class Student{

    public:
        void print(){
            std::cout<<"Student"<<std::endl;
        }

};


class TA : public Teacher, public Student{

    public:
    void print(){

        std::cout<<"TA"<<std::endl;
    }

};

int main(){

  TA a;
  // This print function call is ambiguous. Since both base classes have a print funciton.
  //a.print();
  a.Student::print();  /// This resolves the ambiguity
  a.Teacher::print();
  a.print();
}