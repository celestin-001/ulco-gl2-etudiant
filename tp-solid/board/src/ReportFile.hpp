#pragma once

#include "Board.hpp"

#include <fstream>
#include <iostream>


class ReportFile{

    

    public:
       
        void reportFile(const Board &b,const std::string & filename) {
            std::ofstream _ofs(filename);
            for (const std::string & item : b.getItems())
                _ofs << item << std::endl;
            _ofs << std::endl;
        }

};