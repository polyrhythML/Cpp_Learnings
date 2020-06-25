#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

/*
    * std::try_lock() - lock all the lockable objects passed sequentially in the given order
    * std::try_lock(m1, m2, m3, m4, ..., mn);
    * If all locks are successful, return -1 otherwise return 0-based mutex index number which it could not lock.
    * If it fails to lock any of the mutex then it will release all the mutex it locked before.
    * If a call to try_lock results in an exception, unlock is called for any locked objects before rethrowing.

*/

// Example to create 2 mutex used to operate overa memroy space and the output is fed to third variable

int var1 =0, var2=0;
std::mutex m1, m2;

void wait_function(int sec){

    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

void incrementvars(int &var, std::mutex &m, const char* desc){

    for(int i=0; i<5 ; i++){

        m.lock();
        ++var;
        std::cout<<desc<<var<<'\n';
        m.unlock();
        wait_function(1);
    }
}

void process_vars(){

    int count = 5;
    int sum = 0;
    while(1){

        int locks = std::try_lock(m1, m2);
        // All locks are successfully acquired
        if(locks == -1){

            if(var1 !=0 && var2 !=0){

                --count;
                sum += var1 + var2;
                var1 = 0;
                var2 = 0;
                std::cout<<"Sum : "<<sum<<'\n';
            }
            m1.unlock();
            m2.unlock();
            if(count == 0) break;
        }
    }
}


int main(){

    std::thread t1(incrementvars, std::ref(var1), std::ref(m1), "VAR1 ");
    std::thread t2(incrementvars, std::ref(var2), std::ref(m1), "VAR2 ");
    std::thread t3(process_vars);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}