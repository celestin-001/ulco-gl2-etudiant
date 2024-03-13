#pragma once

#include <iostream>
#include "Forme.hpp"

#include <cmath>
#include <numeric>




class Disque : public Forme {

    private:
        double _rayon;
    public:
        Disque(double rayon);

        const double aire() override{
            return _rayon * 2 * M_PI;
        }

        const Description toDescription(){
            
        }



};