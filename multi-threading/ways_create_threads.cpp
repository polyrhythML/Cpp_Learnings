#include<iostream>
#include<thread>

/*
    * If we create multiple threads at the same time, it doesn't guarantee which one will start first.
    * There are different syntatic ways in which we can create threads.
    * 1. Function Pointer method
    * 2. Lambda function
    * 3. Functor
*/

void func(int x){

    if(x>10){
        std::cout<<"This is right"<<std::endl;
    }
}

/*
    * A functor is pretty much just a class which defines the operator(). That lets you create objects which "look like" a function.
    *  they can contain state. 
*/

class A{

    public:
        void operator()(int x){
            std::cout<<x<<std::endl;
        }

};


// Non static member function

class Base{
    public:

        void func(int x){

            std::cout<<x<<std::endl;
        }

        static void func2(int y){
            std::cout<<y<<std::endl;
        }

};

int main(){

    // 1. Function Pointer method to create a thread
    std::thread t1(func, 11);
    t1.join();

    
    /// 2. Lambda expression
    // Create Lambda function

    auto func = [](int x){
        if(x>10){
        std::cout<<"This is right"<<std::endl;
        }

    };

    std::thread t2(func, 12);
    t2.join();


    /// 3. Functor
    // Call the Functor class 

    std::thread t3(A(), 10);
    t3.join();

    
    /// 4. Non-static member function

    Base b;
    std::thread t4(&Base::func, &b, 12);
    t4.join();

    /// 5. Static member function , doesnot require object reference 
    std::thread t5(&Base::func2, 14);
    t5.join();

    return 0;

}