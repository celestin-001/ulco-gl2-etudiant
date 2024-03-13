#include <iostream>
#include "Forme.hpp"

class Rectangle : public Forme {
    private:
        double _largeur;
        double _hauteur;
    public:
        Rectangle(double largeur, double hauteur);
        const double aire() override{
            return _largeur * _hauteur;
        }

        const Description toDescription(){

        }

};