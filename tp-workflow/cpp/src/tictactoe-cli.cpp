#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    /*cout <<jeu << endl;
    jeu.jouer(0,0);
    jeu.jouer(0,1);
    cout <<jeu << endl
    jeu.saisirCoup();
    cout <<jeu << endl;*/

    while ((jeu.getStatus()!=Status::Egalite && jeu.getStatus()!=Status::RougeGagne && jeu.getStatus()!=Status::VertGagne))
    {
        jeu.saisirCoup();
        std::cout<<jeu;
    }

    if(jeu.getStatus()==Status::Egalite) std::cout<<"Match nul Egalité "<<std::endl;
    if(jeu.getStatus()==Status::RougeGagne) std::cout<<"Rouge gagne"<<std::endl;
    if(jeu.getStatus()==Status::VertGagne) std::cout<<"Vert gagne "<<std::endl;
    

    return 0;
}


