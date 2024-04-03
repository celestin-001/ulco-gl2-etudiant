#pragma once

#include <string>

#include "Task.hpp"
#include  "Board.hpp"


class View
{
private:
    /* data */
public:
    void print_board(std::ostream &os,const Board &b);
    std::string showTask(const Task &task);

};
