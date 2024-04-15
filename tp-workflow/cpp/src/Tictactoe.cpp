#include "Tictactoe.hpp"

Jeu::Jeu() {
    raz();
}

Status Jeu::getStatus() const {
   for (int i = 0; i < 3; ++i) {
            // Vérification des lignes
            if (grid[i][0] != Cell::Vide && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
                return (grid[i][0] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
            }
            // Vérification des colonnes
            if (grid[0][i] != Cell::Vide && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) {
                return (grid[0][i] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
            }
        }
        // Vérification des diagonales
        if (grid[0][0] != Cell::Vide && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
            return (grid[0][0] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
        }
        if (grid[0][2] != Cell::Vide && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
            return (grid[0][2] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
        }

        // Vérifier s'il y a égalité
        bool isFull = true;
        for (const auto& row : grid) {
            for (const auto& cell : row) {
                if (cell == Cell::Vide) {
                    isFull = false;
                    break;
                }
            }
            if (!isFull) {
                break;
            }
        }
        if (isFull) {
            return Status::Egalite;
        }

        // Si aucun des cas précédents n'est rencontré, retourner le statut du joueur suivant en fonction du nombre de cases vides
        int countRouge = 0, countVert = 0;
        for (const auto& row : grid) {
            for (const auto& cell : row) {
                if (cell == Cell::Rouge) {
                    ++countRouge;
                } else if (cell == Cell::Vert) {
                    ++countVert;
                }
            }
        }
        return (countRouge <= countVert) ? Status::RougeJoue : Status::VertJoue;
}

Cell Jeu::getCell(int i, int j) const {
    
    return _plateau[i][j];
    
}

std::ostream & operator<<(std::ostream & os, const Jeu & jeu) {
   
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            if(jeu.getCell(i,j)==Cell::Vide){
                os<<"*";
            }
            if(jeu.getCell(i,j)==Cell::Vert){
                os<<"V";
            }
            if(jeu.getCell(i,j)==Cell::Rouge){
                os<<"R";
            }
        }
        os<<std::endl;
    }
    return os;
}

bool Jeu::jouer(int i, int j) {
    // TODO
    return false;
}

void Jeu::raz() {
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            _plateau[i][j] = Cell::Vide;
        }
    }
}

