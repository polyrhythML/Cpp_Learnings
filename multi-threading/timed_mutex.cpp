#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

/*
    * Timed mutex is used to set a time for which the thread should wait to acquire the lock.
    * If lock is release by the before the wait time, the lock is acquired by the dedicated thread and true is returned.
    * If lock is not released before the wait time, the thread returns false. 
    * Two methods can be used to perform timed mutex  - a) try_lock_for()
                                                        b) try_lock_until()

*/

std::timed_mutex m;

int target_variable = 0;

void increment_until(int i){

    // Get the current time
    auto now = std::chrono::steady_clock::now();
    if(m.try_lock_until(now + std::chrono::seconds(3))){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        target_variable +=1;
        std::cout<<"Thread"<< i << "Entered" << std::endl;
        m.unlock();
    }else{
        std::cout<<"Thread" << i << "Couldn't Enter" << std::endl;
    }
}

void increment_for(int i){

    // Get the current time
    if(m.try_lock_for(std::chrono::seconds(3))){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        target_variable +=1;
        std::cout<<"Thread"<< i << "Entered" << std::endl;
        m.unlock();
    }else{
        std::cout<<"Thread" << i << "Couldn't Enter" << std::endl;
    }
}

int main(){

    std::thread t1(increment_until, 1);
    std::thread t2(increment_until, 2);

    std::thread t3(increment_for, 3);
    std::thread t4(increment_for, 4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    std::cout<< target_variable << std::endl;
    return 0;
    
}