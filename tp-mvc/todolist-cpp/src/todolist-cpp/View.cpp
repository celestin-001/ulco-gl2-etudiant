#include <iostream>
#include <../include/todolist-cpp/View.hpp>


std::string View::showTask(const Task &task){
    return std::to_string(task._id) + " " + task._name;
}

void View::print_board(std::ostream &os,const Board &board){

    os<<"Todo:"<<std::endl;
    for(auto &b : board._todo){
        os<< showTask(b)<<std::endl;
    }
    os<<"Done:"<<std::endl;

}