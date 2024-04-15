#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    cout <<jeu << endl;
    jeu.jouer(0,0);
    jeu.jouer(0,1);
    cout <<jeu << endl;

    return 0;
}


