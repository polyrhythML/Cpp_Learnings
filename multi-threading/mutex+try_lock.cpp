#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
int counter = 0;

void counter_fuction(){

    for(int i = 0; i < 100000 ; i++){

        // The thread checks if the lock is available or not, if not skips the iteration to access that memory address
        // Unlike lock(), where thread waits for lock to get released. This doesnot
        if(mtx.try_lock()){
            ++counter;
            mtx.unlock();
        }
    }
}

int main(){

    std::thread t1(counter_fuction);
    std::thread t2(counter_fuction);

    t1.join();
    t2.join();

    std::cout<<"Counter could increase upto : "<<counter<<std::endl;
}