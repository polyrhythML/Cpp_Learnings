#include<iostream>

class IPL{

    private : 
    char name[1000];
    int runs;
    int num_matches;

    public:
        void gen_info(){
            
            std::cout<<std::endl<<"Enter the Details of the player(Name, runs, num_matches) : "<<std::endl;
            std::cin>>name;
            std::cin>>runs;
            std::cin>>num_matches;

        }

        void print_average()
        {
            float average;
            average = runs/num_matches;
            std::cout<<"The batting average of "<<name<<" is "<<average;    
        }

        int get_runs(){
            return runs;

        }

};

int main(){

int num;
std::cout<<"Enter the number of players : ";
std::cin>>num;

/// Instantiate the objects for total number of players

/// Dynamic class object array instantiation
///IPL * obj_arry = new IPL[num] ;

/// Static class object array instantiation
IPL obj_arry[num];

for(int i=0;i<num;i++)
    {
        obj_arry[i].gen_info();
        std::cout<<"Done generating player"<<std::endl;
        obj_arry[i].print_average();

    }

/// get the total team runs
int sum = 0;
for(int i=0; i<num; i++)
    {
        if(i<=num-1)
        {
            sum = sum + obj_arry[i].get_runs();
        }
    }

std::cout<<std::endl<<"The Total runs : "<<sum;

return 0;
}