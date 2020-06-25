// Mutex - Mutual Exclusion

/*
    * Race condition - 2 or more threads happens to changes values stored a particular memory address
    * To protect such race conditions to happen, we need a protection mechanism. The conflicting memory space is called critical section/region.
    * Mutex - is the protection mechanism, to avoid the race condition.
    * lock() and unlock() on mutex to avoid race condition. 
*/

#include<iostream>
#include<thread>
#include<mutex>

int race_var = 0;
std::mutex m;

// Below function is what both threads will try to access to change the value of my_var.
// This function is called critical region.
void race_function(){
    
    m.lock();
    ++race_var;
    m.unlock();

}


int main(){

    std::thread t1(race_function);
    std::thread t2(race_function);

    t1.join();
    t2.join();

    std::cout<<race_var<<std::endl;

    return 0;
}