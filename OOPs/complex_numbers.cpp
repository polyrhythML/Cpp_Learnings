#include<iostream>

class Complex_numbers{

    private:

        int real;
        int imag;

    public:

        /// Constructor without any return type
        Complex_numbers(int real, int imag){
            this->real = real;
            this->imag = imag;

        }

        void plus(const Complex_numbers c2){
            
            real = real + c2.real;
            imag = imag + c2.imag;
        }
        
        void multiply(const Complex_numbers c2)
        {
            int curr_real = real;
            int curr_imag = imag;
            real = (real*c2.real - (imag*c2.imag));
            imag = (curr_imag*c2.real) + (curr_real*c2.imag);

        }

        void print(){

            if(imag < 0){

            std::cout<<real<<" - i"<<(-1*imag)<<std::endl;
            
            
            }
            else{

            std::cout<<real<<" + i"<<(imag)<<std::endl;
            }
        
        
        }


};

int main(){

    int mode;
    Complex_numbers C1(2,3);
    Complex_numbers C2(4,5);

    std::cout<<"Complex number 1 : "<<std::endl;
    C1.print();
    std::cout<<std::endl;
    std::cout<<"Complex number 2 : "<<std::endl;
    C2.print();
    std::cout<<std::endl;
    std::cout<<"Enter the mode of operation for the complex numbers(1- add , 2-multiply) : "<<std::endl;
    std::cin>>mode;

    if(mode == 1){

        C1.plus(C2);
        C1.print();
        C2.print();

        
    }
    else if(mode == 2){

        C1.multiply(C2);
        C1.print();
        C2.print();
    }

    else{

        std::cout<<"Invalid Input";
    }


return 0;
}