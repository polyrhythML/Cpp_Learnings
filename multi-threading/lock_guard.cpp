/*
    * Lock guards are used to reduce dependency on lock and unlock.
    * It acquires mutex lock the moment object of lock_guard is created.
    * It automatically removes the lock while it goes out of the scope.
    * You cannot explicitly unlock the lock_guard.
    * You cannot copy lock_guard.
    * It is kind of like context manager
*/
#include<iostream>
#include<thread>
#include<mutex>

std::mutex m1;
int glb_var = 0;

void task(std::string thread_num, int n){

    std::lock_guard<std::mutex> lock(m1);
    for(int i=0; i<n; i++){
        glb_var++;
        std::cout<< "Thread Number : " << thread_num << " : "<< glb_var<< std::endl; 
    }
}

int main(){

    std::thread t1(task, "T1", 10);
    std::thread t2(task, "T2", 10);
    t1.join();
    t2.join();
    return 0;

}