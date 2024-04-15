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
