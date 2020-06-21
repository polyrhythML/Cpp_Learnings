#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>

int main(){

    std::unordered_map<std::string, int> mp;
    std::vector<std::string> vec;

    vec = {"a", "b", "c", "d", "e"};

    for(int i=0; i<vec.size(); i++)
    {
        mp[vec[i]] = i*2;
    }

    // Use iterator to traverse around the map table

    for(std::unordered_map<std::string, int>::iterator it=mp.begin(); it!=mp.end(); it++){

        // Here the it points to key, val , referenced through it->first and it->second

        std::cout<<"Key : "<<it->first<<" Value: "<<it->second;
        std::cout<<std::endl;
    }

    // iterating over a vector
    for(auto it = vec.begin(); it!=vec.end(); it++){

        // Here the it points to the memory address of the vector
        std::cout<<*it<<std::endl;


    }


    
}