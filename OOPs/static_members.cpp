#include<iostream>
#include<cstring>

/*

* The properties which should be common to all the objects of a class and doesnot vary with each object initialization should be declared
"static" members of the class and should be accessed through class instead of the object.

* A single memory allocation for static members unlike objects which have there own memory space.

* Static members are only initialized outside the class!

* Compiler allows us to change the value of the static members using objects.(We should not do this ideally)!

* Some points to note : 

    Static member functions can only access static members functions and properties.
    Static functions dont have this keyword, since we don't need an object.

*/

class Student{
    
    private :
        static int total_stu;
    public:
        int a;
        int roll;
        
    
    Student(){
        total_stu++;
    }

    /// Static member functions
    static int get_stu(){ 

        return total_stu;
    }
    
};

int Student::total_stu = 0;

int main(){

    Student s1;
    ///std::cout<<Student::total_stu<<std::endl;
    /// s1.total_stu = 13;
    std::cout<<Student::get_stu()<<std::endl;
    Student s2, s3, s4;
    ///s2.total_stu;
    std::cout<<Student::get_stu()<<std::endl;

};
