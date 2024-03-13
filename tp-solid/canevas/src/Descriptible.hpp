#pragma once
#include <iostream>
#include <map>

using Description = std::map<std::string,std::string>;

class Descriptible {
    public:
        virtual ~Descriptible() = default;
        virtual const Description toDescription() = 0 ;
};