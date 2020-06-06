/**

The system stores the variable of a program in stack memory.
As we saw, the array size is either pre determined or it is assigned at the runtime.
cin>>n
int a[n]; -> this is not a good way to assign it.

Why?

Because the stack memory is small and a big size of array initialization at run-time would cause a stack overflow(since its size cannot be increased at the run-time) and program may crash.
So, Therefore it is advised to use heap memory for such allocations, since heap memory is certain magnitude order larger than the stack memory.

stack -> memory allocated at compile time -> static allocation -> very small.
heap -> memory allocated at run-time -> dynamic allocation -> quite large.


HEAP MEMORY ALLOCATION = DYNAMIC MEMORY ALLOCATION

IMPORTANT DIFFERENCE BETWEEN THE DYNAMIC ALLOCATION AND STACK ALLOCATION

* The memory is released in the case of the stack allocations as per the scopes.
* The dynamic memory has no scope defined, therefore the memory has to be released manually.

*/


#include<iostream>
using namespace std;


int main(){

// Dynamic variable declaration
// We cannot assign a name to the variable stored in heap rather we use pointer variables to point to memory address of the heap variable.
// The pointer variable is stored on the stack.

int * p = new int;
*p = 10; // initializing the heap variable
double * d = new double;
*d = 123413414;

cout<<*p<<endl;         // Value of stored in the heap variable.
cout<<p<<endl;          // the Value stored in the pointer(address of heap), this is stored in the stack.
cout<<&p<<endl;         // memory address of the pointer variable
cout<<&(*p)<<endl;      // memory address of the heap variable
cout<<sizeof(*p)<<endl; // size of the heap variable - > 4 bytes
cout<<sizeof(p)<<endl;  // size of the pointer variable -> 8 bytes(depends on the platform and the compiler)

// Dynamic array allocation

int num;
cout<<"Enter the number of elements you want to assign to the array : ";
cin>>num;
int * arr = new int[num];

for(int i = 0; i<=num; i++)
    {
        arr[i] = (i+1) * 2;
        cout<<arr[i];
        cout<<endl;
    }

for(int i = 0; i<=num; i++)
    {
        cout<<*(arr+i);         // similar to arr[i]
    }

return 0;
}

