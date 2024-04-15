#include "Tictactoe.hpp"
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("test bidon") { 
    REQUIRE( true );
}


TEST_CASE("Get cell") { 
    Jeu jeu;
    std::ostringstream oss;
    
    auto expected = "Todo:\n1 celi\n2 cmg\nDone:\n";
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            REQUIRE(jeu.getCell(i,j)== Cell::Vide);
        }
    }
    
}
   

TEST_CASE("Affichage de la grille") { 
    Jeu jeu;
    std::ostringstream oss;
    oss << jeu;
    auto expected = "***\n***\n***\n";
    REQUIRE(oss.str() == expected );
    
}


TEST_CASE("Jouer Coup") { 
    Jeu jeu;
    int i = 0;
    int j = 0;
    jeu.jouer(i,j);
    REQUIRE(jeu.getCell(i,j) == Cell::Rouge );
    
}

TEST_CASE("Victoire") { 
    Jeu jeu;
    
    jeu.jouer(0,0);
    jeu.jouer(1,1);
    jeu.jouer(0,1);
    jeu.jouer(1,0);
    jeu.jouer(0,2);
    REQUIRE(jeu.getStatus() == Status::RougeGagne );
    
}

TEST_CASE("Egalité") { 
    Jeu jeu;
    
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            jeu.jouer(i,j);
        }
    }
    
    REQUIRE(jeu.getStatus() == Status::Egalite);
    
}
