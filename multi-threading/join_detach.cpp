#include<iostream>
#include<chrono>
#include<thread>

/*
    // JOIN NOTES
    * Once a thread is started we wait for this thread to finish by calling join() function on thread object.
    * Double join will result into program termination.
    * If needed we should check thread is joinable before joining.(using  joinable() function)
    
    // DETACH NOTES

    * Dis-engage a thread from the main thread.
    * Similar to the join , check if detachable(using joinable() function) otherwise we may end up double detaching and double detach() will
    result into program termination.
    * If a thread is detached and the main function is returning , the detached thread execution is suspended. 

*/

void thread_func(int x){

    while(x>0){
        std::cout<<x<<" ";
        x--;
    }
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout<<std::endl;
    std::cout<<"Thread execution ended";
}

int main(){
    std::thread t1(thread_func, 11);
    std::cout<<"Enter main function"<<std::endl;
    
    // Check if the thread is joinable or not
    if(t1.joinable()){
        t1.join();
    }

    // Check and detach the thread
    if(t1.joinable()){
        t1.detach();
    }
    
    // t1.join(); ->  will throw core dumped error
    // 
    
    std::cout<<"main() after thread"<<std::endl;
    return 0;
}

/*
    * OS schedules the threads creation, execution and termination. In the above example shown, the main thread starts its execution.
    * The OS is about to create another thread and perform execution, but it takes alot more time to execute it. By that time, the main thread
    finished its job and secondary thread execution never happened.  -> This is in detached state.
    * The above condition can be avoided if we use join() method. The main will wait for other threads to finish their execution and then go
    back to the main thread execution.
*/