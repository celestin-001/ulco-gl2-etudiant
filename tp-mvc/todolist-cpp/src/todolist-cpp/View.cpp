#include <iostream>
#include <../include/todolist-cpp/View.hpp>


std::string View::showTask(const Task &task){
    return std::to_string(task._id) + " " + task._name;
}

