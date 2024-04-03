#pragma once

#include <string>
#include "Task.hpp"


class View
{
private:
    /* data */
public:
    void print_board();
    std::string showTask(const Task &task);

};
