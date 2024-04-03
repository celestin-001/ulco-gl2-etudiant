#include <todolist-cpp/Task.hpp>
#include <todolist-cpp/Board.hpp>
#include <todolist-cpp/View.hpp>
#include <sstream>

#include <iostream>

int main() {

    Board b;
    View v;
    std::string input,cmd,rst;

    while (true){
        v.print_board(std::cout,b);
        std::getline(std::cin,input);
        std::istringstream iss(input);
        std::getline(iss,cmd,' ');
        std::getline(iss,rst);
        std::cout<< cmd << std::endl;
        std::cout << rst << std::endl;
    }
   
    

    return 0;
}

