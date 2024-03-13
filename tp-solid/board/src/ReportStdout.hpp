#pragma once

#include "Board.hpp"





class ReportStdout{

    public:

        void reportStdout(const Board &b) {
            for (const std::string & item : b.getItems())
                std::cout << item << std::endl;
            std::cout << std::endl;
        }

};