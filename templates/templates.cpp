#include<iostream>

// Declare a template

template<typename T, typename V>

class Pair{

    T x;
    V y;

public:
    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }

    void setY(V y){
        this->y = y;
    }

    V getY(){
        return y;
    }

};

int main(){

// Integer template

    Pair<int,char> p1;

    p1.setX(2);
    p1.setY('a');

    std::cout<<p1.getX();
    std::cout<<p1.getY();

// Character template
    
    Pair<int,char> p2;

    p2.setX(3);
    p2.setY('b');

    std::cout<<p2.getX();
    std::cout<<p2.getY();

// Defining a template as a pair + one int 

    Pair<Pair<int, int>, int> p3;
    p3.setY(30);

    Pair<int, int> temp;
    temp.setX(10);
    temp.setY(20);

    p3.setX(temp);
    
    std::cout<<p3.getX().getX();
    std::cout<<p3.getX().getY();
    std::cout<<p3.getY();

}