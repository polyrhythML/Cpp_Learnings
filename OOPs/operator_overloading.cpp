#include<iostream>

class Fraction{

    private:
        int numo;
        int deno;
    
    public :

        Fraction(int n, int d){
            numo = n;
            deno = d;
        }

        /// overloading addition operation to support f1 + f2 and making this funciton const
        Fraction operator + (Fraction const &f2) const{

            int new_numo = numo + f2.numo;
            int new_deno = deno + f2.deno;
            
            Fraction fnew(new_numo, new_deno);

            return fnew;
            
        }
        
        /// overloading addition operation to support f1 * f2 and making this funciton const
        Fraction operator * (Fraction const &f2) const{

            int new_numo = numo * f2.numo;
            int new_deno = deno * f2.deno;

            Fraction fnew(new_numo, new_deno);

            return fnew;
        }

        bool operator == (Fraction const &f2) const{ 
            
            return ((numo == f2.numo)&&(deno == f2.deno)); 
        }

        void print(){

            std::cout<<this->numo<<"/"<<this->deno<<std::endl;
        }

        /// add preincrement operator , operator overloading
        /// return by reference -> for cascaded pre increment. not to increment the intermediate system buffer memory address...
         Fraction& operator ++ (){
            
            numo = numo + 1;
            deno = deno + 1;

            return *this;

         } 

         /// add post increment operator, operator overloading
         /// nesting not allowed for post increment

         Fraction operator ++(int){

             Fraction fnew(numo, deno);
             numo = numo + 1;
             deno = deno + 1;

             return fnew;
         }

        /// Similarly added & operator to return by referenc here. nested operation could be added (+=)(+=)
        Fraction& operator += (Fraction const &f2){
            
            numo = numo + f2.numo;
            deno = deno + f2.deno;

            return *this;
        }

};


int main(){


    Fraction f1(2,5);
    Fraction f2(3,7);
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 * f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();

    if(f1 == f2){

        std::cout<<"Equal"<<std::endl;
    }
    else
    {
        std::cout<<"Not equal"<<std::endl;
    }

    Fraction f6 = ++(++f2);
    f2.print();
    f6.print();

    
    Fraction f7 = f1++;
    f7.print();
    f1.print();

    f1 +=f2;

    f1.print();
    f2.print();

}