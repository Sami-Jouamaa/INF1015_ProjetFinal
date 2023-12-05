#include <string>
using namespace std;

class Piece
{
public:
    Piece(string nom, string description) : nom(nom), description(description), nord(nullptr), sud(nullptr), 
    est(nullptr), ouest(nullptr) {}

    void setSud(Piece* piece) { sud = piece; }
    void setNord(Piece* piece) { nord = piece; }
    void setEst(Piece* piece) { est = piece; }
    void setOuest(Piece* piece) { ouest = piece; }

    void ajouterObjet(Objet objet){
        objets.push_back(objet);
    }

    void connecterPieces(Piece& pieceConnectee, string orientation){
        if (orientation == "Nord" || orientation == "nord") {
            nord = &pieceConnectee;
            pieceConnectee.setSud(this);
        } else if (orientation == "Sud" || orientation == "sud") {
            sud = &pieceConnectee;
            pieceConnectee.setNord(this);
        } else if (orientation == "Est" || orientation == "est") {
            est = &pieceConnectee;
            pieceConnectee.setOuest(this);
        } else if (orientation == "Ouest" || orientation == "ouest") {
            ouest = &pieceConnectee;
            pieceConnectee.setEst(this);
        }
    }


private:
    std::string nom;
    std::string description;
    std::vector<Objet> objets;
    Piece* nord;
    Piece* sud;
    Piece* est;
    Piece* ouest;

};