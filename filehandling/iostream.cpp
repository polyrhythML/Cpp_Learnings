#include<iostream>
#include<fstream>
/*
    * Flow of data is represented as stream.
    * A flow of data to a process is called an input stream.
    * A flow of data out from a process is called an output stream.
    * There are different sources of sending and receiving data:
    * cin - console input - keyboard.
    * cout - console output - Monitor.
    * Files - read and write.
    * Network - send and receive data packets.
    * 
    * 
    * C++ has ios class which comprised of istream class and ostream class.
    * cin - istream class object.
    * cout - ostream class object.
    * file input - ifstream.
    * file output - ofstream.
*/



int main(){
    
    // Writing to a file

    // A file is created if it is not there and ios::trunc is there by default. To append the data we need to use - ios::app
    std::ofstream ofs("myfile.txt", std::ios::trunc);

    ofs<<"Brock"<<std::endl;
    ofs<<30<<std::endl;
    ofs<<"cse"<<std::endl;
    ofs.close();

    // Read from a file

    std::string name;
    int roll;
    std::string branch; 

    std::ifstream ifs;
    ifs.open("myfile.txt");
    if (ifs.is_open()){

        std::cout<<"File exist";
        ifs>>name>>roll>>branch;
        std::cout<<name<<std::endl;;
        std::cout<<roll<<std::endl;
        std::cout<<branch<<std::endl;
    }
    else{

        std::cout<<"File doesnot exist";
    }

    if (ifs.eof()){

        std::cout<<"End of the file";
    }

    ifs.close();

    return 0;
}