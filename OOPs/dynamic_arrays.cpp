# include<iostream>

class Dynamic_Array{

    private:

        int *data;
        int next_index;
        int arr_size;
    
    public:
        
        Dynamic_Array(){

            data = new int[5]; /// initialize the dynamic array with 5 elements.
            next_index = 0;
            arr_size = 5;
        }

        Dynamic_Array(Dynamic_Array const &d){

            this->next_index = d.next_index;
            this->arr_size = d.arr_size;
            this->data = new int[d.arr_size];
            /// copy every single element

            for(int i = 0; i<d.next_index; i++){

                this->data[i] = d.data[i];
            }

        }

        // Overload the asssigment operator
        void operator = (Dynamic_Array const &d){

            this->next_index = d.next_index;
            this->arr_size = d.arr_size;

            /// copy every single element

            for(int i = 0; i<d.next_index; i++){

                this->data[i] = d.data[i];
            }


        }

        void add_element(int element){

            /// This is when the array gets filled.
            if (next_index==arr_size){

                // create new array double size
                int *newdata = new int[2*arr_size];

                // copy the elements to the new array
                for(int i=0;i<arr_size;i++)
                {

                    newdata[i] = data[i];
                }

                // delete previous array since its the heap memory -> if not then it lead to a memory leak.
                delete []data;
                data = newdata;
                arr_size = 2*arr_size;
            }

            data[next_index]= element;
            next_index++;
        }

        // Insert an element at an index
        void add_element(int element, int i){
            
            // replace the element
            if(i<next_index){

                data[i] = element;

            }
            else if(i == next_index){

                add_element(element);
            }
            else{
                
                return ;

            }

        }

        int get(int i){

            if(i>=0 && i<next_index){
                return data[i];
            }
            else{

                return -1;
            }
        }

        int get_capacitiy(){

                std::cout<<std::endl;
                std::cout<<"Size of the array : "<<arr_size<<std::endl; 
        }
        
        void print(){
            std::cout<<std::endl;
            for(int i = 0; i<next_index;i++){
                std::cout<<data[i]<<" ";

            }
        }
};



int main()
{

    Dynamic_Array d1;

    for(int i = 0; i < 23; i++){

        d1.add_element(i);
    }

    d1.print();
    d1.get_capacitiy();
    d1.add_element(111,0);
    d1.print();
    
    /// constructor copy and constructor assigment operator creates a shallow copy of the object.
    /// Need to define our own copy constructor to perform a deep copy operation.
    
    Dynamic_Array d2(d1);
    d1.print();
    d2.print();

    d1.add_element(12,0);
    
    Dynamic_Array d3 = d1;

    d1.print();
    d3.print();

    // Get an element of the dynamic array
    std::cout<<d1.get(2);
    std::cout<<d2.get(34);


}