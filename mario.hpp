#include <iostream>
#include <vector>
#include <string>
#include 'Objet.hpp'

class Mario {

public:
    Mario() : nom("Mario"), nombreEtoiles(0), avoirYoshi(false) {}

    void setPosition(Piece* nouvellePosition) {
        position = nouvellePosition;
    }

    void wahoo(){
        cout << 'Wahoo!'
    }

private:
    std::string nom;
    std::vector<Objet> objets;
    bool avoirYoshi; 
    int nombreEtoiles;
};