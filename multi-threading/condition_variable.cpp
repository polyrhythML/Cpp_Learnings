/*
    * Condition Variables in C++ threading.
    * Release and acquire threads based on some conditions.
    * Notify one or many other threads.
    * notify_one() and notify_all().
    * If a thread wants to wait on some condition then it has to do the following : 
            a. Acquire the mutex lock using std::unique_lock<std::mutex> lock(m);
            b. Execute and wait. The wait automatically releases the mutex and suspend the exection of that thread.
            c. When condition variable is notified, the thread is awakened, and mutex is is atomically acquired.
            The thread should then check the condition and resume waiting if the wakeup was spurious.
    * Can be used to sychronize two or more threads.
    * Best use case of condition variable is Producer/Consumer problem.


*/

#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

std::condition_variable cv;
std::mutex m;

int pocket_money = 0;
int ice_cream = 50;

void buy_icecream(std::string thrd){

    std::unique_lock<std::mutex> ul(m);
    std::cout<<"Trying to acquire lock : "<<thrd<<std::endl;
    // condition variable checks if the condition is true or false
    cv.wait(ul, [] {return (pocket_money!=0) ? true : false ; });
    std::cout<<"Lock acquired : "<<thrd<<std::endl;
    if(pocket_money>=ice_cream){
        std::cout<<"Enjoy your Icecream"<<std::endl;
    }else{

        std::cout<<"Sorry, you need to save more"<<std::endl;
    }

}

void get_pocket_money(int money, std::string thrd){

    std::cout<<"Trying to acquire lock : "<<thrd<<std::endl;
    std::lock_guard<std::mutex> lg(m);
    std::cout<<"Lock acquired : "<<thrd<<std::endl;
    pocket_money += money;
    std::cout<<"Got my pocket money : "<<pocket_money<<std::endl;
    cv.notify_one();
}

int main(){

    std::thread t1(buy_icecream, "T1");
    std::thread t2(get_pocket_money, 30, "T2");

    t1.join();
    t2.join();
    return 0;

}