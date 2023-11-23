#include <iostream>
#include <vector>
#include <string>
#include 'Objet.hpp'

class Mario {

public:
    Mario() : nombreEtoiles(0), avoirYoshi(false) {}

    void wahoo(){
        cout << 'Wahoo!'
    }

private:
    std::vector<Objet> objets;
    bool avoirYoshi; 
    int nombreEtoiles;
};