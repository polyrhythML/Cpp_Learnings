/*
    * Recursive mutex are used to iteratively call lock and unlock a critical section using same thread for N times.
    * Mostly used in the case of recursive functions or for loops which have a critical section, being handled by the same thread iteratively.

*/

#include<iostream>
#include<thread>
#include<mutex>

std::recursive_mutex m1;

int tar_var = 0;

void recursion(int thrd, int n){

    if(n<0) return;

    m1.lock();
    std::cout<<"Lock Thread ID : "<< thrd << " " << tar_var++ << std::endl;
    recursion(thrd, --n);
    m1.unlock();
    std::cout<<"Unlock Thread ID : "<< thrd <<std::endl;
}

int main(){

    std::thread t1(recursion, 1, 10);
    std::thread t2(recursion, 2, 10);

    t1.join();
    t2.join();

    return 0;
}