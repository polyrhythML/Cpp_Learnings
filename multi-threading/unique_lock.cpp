/*
    * The clas unique_lock is a swiss Knife of mutexes.
    * It is a mutex ownership wrapper.
    * It allows:
               a. Can have different locking strategies.
               b. try_lock_for and try_lock_until
               c. recursive locks
               d. transfer ownership of the lock(move not copy)
               e. condition variables.
    
    Locking Strategies

    1. defer_lock           acquired ownership of the mutex later in the code.
    2. try_to_lock          try to acquire ownership of the mutex without locking.
    3. adopt_lock           already locked thread's ownership can be acquired.

*/

#include<iostream>
#include<thread>
#include<mutex>

std::mutex m1;
int glb_val = 0;

void task(const char* thrd_num, int N){

    std::unique_lock<std::mutex> lock(m1);
    //std::unique_lock<std::mutex> lock(m1, defer_lock);
    //std::unique_lock<std::mutex> lock(m1, try_to_lock);
    //std::unqiue_lock<std::mutex> lock(m1, adopt_lock);


    // lock.lock() -> acquire after certain lines of code, only enabled in the case of defer_lock
    for(int i=0; i<N; i++){
        glb_val++;
        std::cout<<thrd_num<<" : "<<glb_val<<std::endl;
    }
}

int main(){

    std::thread t1(task, "T1", 10);
    std::thread t2(task, "T2", 10);
    t1.join();
    t2.join();

    return 0;
}