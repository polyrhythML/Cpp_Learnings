#include<iostream>
using namespace std;

int main(){

    // This is fine, as it release memory as per scope.
    while(true){
    int i;
    }

    // Below code can crash your System.
    while(true){
    int *i = new int;
    }

    int *p = new int;
    delete p;  // this deletes the heap memory, but the pointer still remains in the stack memory.

    // We should not try to acces the value stored at the pointer address. - > this memory address is used by the system to allocate it other resource.

    int * arr = new int[50];
    delete []p;

}
