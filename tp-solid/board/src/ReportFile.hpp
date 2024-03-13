#pragma once

#include "Board.hpp"

#include <fstream>
#include <iostream>


class ReportFile{

    private:
        
        std::ofstream _ofs;

    public:

        void reportFile(const Board &b) {
            for (const std::string & item : b.getItems())
                _ofs << item << std::endl;
            _ofs << std::endl;
        }

};