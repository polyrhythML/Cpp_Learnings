#include<iostream>

class Polynomial{

    private:

        int * arr;
        int arr_size;

    public:

        /// Default Constructor    
        Polynomial(){

            this->arr_size = 10;
            this->arr = new int[this->arr_size];

            for(int i =0; i < this->arr_size; i++)
            {
                this->arr[i] = 0;
            }

        }
        /// Parameterized Constructor
        Polynomial(int arr_size, int * arr){
            
            this->arr_size = arr_size;
            this->arr = new int[arr_size];

            for(int i =0; i < arr_size; i++)
            {
                this->arr[i] = arr[i];
            }

        }



        /// Copy constructor(Deep copy)

        Polynomial(Polynomial const &p){

            arr_size = p.arr_size;
            arr = new int[arr_size];

            for(int i = 0; i < arr_size; i++)
            {
                arr[i] = p.arr[i];
            }


        }

        void operator= (Polynomial const &p){

            arr_size = p.arr_size;
            arr = new int[arr_size];

            for(int i = 0; i < arr_size; i++)
            {
                arr[i] = p.arr[i];
            }

        }

        void print(){

            std::cout<<std::endl;
            std::cout<<"Polynomial : ";

            for(int i =0; i < arr_size; i++){

                std::cout<<arr[i]<<"x^"<<i<<" ";

            }
            std::cout<<std::endl;
        }

        Polynomial operator+ (Polynomial const &p2){

            Polynomial p_new;

            if(this->arr_size > p2.arr_size){
                
                p_new.arr_size = this->arr_size;
                
                for(int i = 0; i<p2.arr_size; i++)
                {
                    p_new.arr[i] = this->arr[i] + p2.arr[i];
                }

                for(int i = p2.arr_size; i < this->arr_size; i++){

                    p_new.arr[i] = this->arr[i];
                }
            }
            else{
                
                p_new.arr_size = p2.arr_size;
                
                for(int i = 0; i<this->arr_size; i++)
                {
                    p_new.arr[i] = this->arr[i] + p2.arr[i];
                }

                for(int i = this->arr_size; i < p2.arr_size; i++){

                    p_new.arr[i] = p2.arr[i];
                }
            }
            
            return p_new;

        }
        
        
        Polynomial operator- (Polynomial const &p2){

            Polynomial p_new;

            if(this->arr_size > p2.arr_size){
                
                p_new.arr_size = this->arr_size;
                
                for(int i = 0; i<p2.arr_size; i++)
                {
                    p_new.arr[i] = this->arr[i] - p2.arr[i];
                }

                for(int i = p2.arr_size; i < this->arr_size; i++){

                    p_new.arr[i] = this->arr[i];
                }
            }
            else{
                
                p_new.arr_size = p2.arr_size;
                
                for(int i = 0; i<this->arr_size; i++)
                {
                    p_new.arr[i] = this->arr[i] - p2.arr[i];
                }

                for(int i = this->arr_size; i < p2.arr_size; i++){

                    p_new.arr[i] = p2.arr[i];
                }
            }
            
            return p_new;

        }

        Polynomial operator* (Polynomial const &p2){

            Polynomial p_new;

            if ((sizeof(this->arr)/sizeof(this->arr[0]) == 1) && (sizeof(p2.arr)/sizeof(p2.arr[0]) ==1)){

                p_new.arr_size = 1;
            }

            else
            {
                p_new.arr_size = (this->arr_size + p2.arr_size) - 1;
            }

            
            for(int i =0; i<p_new.arr_size; i++)
            {
                p_new.arr[i] = 0;
            }

            for(int i =0; i<this->arr_size; i++){

                for(int j = 0; j<p2.arr_size; j++){
                    
                        p_new.arr[i+j] = p_new.arr[i+j] + this->arr[i]*p2.arr[j];
                        
                }


            }

        return p_new;
        }

};


int main(){

    int coeff1[] = {1,2,3};
    int coeff2[] = {3,2};

    Polynomial p1(3,coeff1);
    Polynomial p2(2,coeff2);
    p1.print();
    p2.print();

    Polynomial p3 = p1 + p2;
    p3.print();

    Polynomial p4 = p2 - p1;
    p4.print();

    Polynomial p5 = p2 * p1;
    p5.print();

}