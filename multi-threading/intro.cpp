#include<iostream>
#include<thread>
#include<chrono>
/*
    * Every program has a default thread i.e. the main thread - main() program runs on a thread.
    * We create multiple threads under main thread.
    * Threads are light-weight process -> parallelizing your task
    * 
*/

void findeven(long start, long end){

    int sum =0;
    for(int i = start; i <= end; i++){
        if(i % 2 ==0){
            sum +=1;
        }
    }
}

void findodd(long start, long end){

    int sum =0;
    for(int i = start; i <= end; i++){
        if(i % 2 !=0){
            sum +=1;
        }
    }
}

void normal(){

    long start = 2;
    long end = 120000000;
    auto start_time = std::chrono::high_resolution_clock::now();
    findeven(start, end);
    findodd(start, end);
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration_1 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count();
    std::cout<<"Time to compute : "<<duration_1<<" ms";
}

void threaded(){

    long start = 2;
    long end = 120000000;
    auto start_time = std::chrono::high_resolution_clock::now();
    
    std::thread t1(findeven, start, end);       // Thread creation using function pointer
    std::thread t2(findodd, start, end);             
    
    t1.join();      // Connecting thread 1 to main thread
    t2.join();      // Connecting thread 2 to main thread otherwise no output if thread work is not complete

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration_1 = std::chrono::duration_cast<std::chrono::milliseconds>(end_time-start_time).count();
    std::cout<<"Time to compute : "<<duration_1<<" ms";


}

int main(){

    normal();
    threaded();

}
 