#include<iostream>
#include<cstring>

class Fraction{

    private:
        int numo;
        int deno;

    public:

        Fraction(int numo, int deno){
            this->numo = numo;
            this->deno= deno;
        }

        /// defining a const function here
        void get_numo() const{

            std::cout<<numo<<std::endl;
        }
        /// defining a const function here
        void get_deno() const {

            std::cout<<deno<<std::endl;
        }

        /// Non const function!
        void change_numo(int numo) {

            this->numo = numo;
        }
};

int main(){

    Fraction const f1(10, 20);

    f1.get_numo();
    f1.get_deno();
    // We cannot change properties of a const object. and const objects are only accessible via const function(which donot change the properties)
    //f1.change_numo(13);       this would give error if uncommented!


    return 0;
}