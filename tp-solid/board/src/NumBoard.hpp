
#include <iostream>

#include "Board.hpp"




class NumBoard : public Board{

    private:
        int id;

    public:

        NumBoard():id(1){}
        void addNum(const std::string & str){
            std::string msg = std::to_string(id) + ". " + str;
            id++;
            add(msg);
        }



};