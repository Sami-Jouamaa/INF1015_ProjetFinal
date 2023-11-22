class Carte
{
public:
    Carte() : centre("Salle Principale") {
        pieces.push_back(centre);
    }

void creerPiece(string nomNouvellePiece){
    Piece(nomNouvellePiece) piece;
    pieces.push_back(piece);
    }

void connecterPieces(Piece& pieceDeReference, Piece& pieceConnectee, string orientation){
    if (orientaion == "Nord" || orientation == "nord") {
        piecedeRefence.nord = pieceConnectee;
        pieceConnectee.sud = pieceDeReference;
    } else if (orientation == "Sud" || orientation == "sud") {
        piecedeRefence.sud = pieceConnectee;
        pieceConnectee.nord = pieceDeReference;
    } else if (orientation == "Est" || orientation == "est") {
        piecedeRefence.est = pieceConnectee;
        pieceConnectee.ouest = pieceDeReference;
    } else if (orientation == "Ouest" || orientation == "ouest") {
        piecedeRefence.ouest = pieceConnectee;
        pieceConnectee.est = pieceDeReference;
    } else {
        std::cout << "Cette direction n'existe pas" << std::endl;
    }
    }

private:
    Piece centre;
    std::vector<Piece> pieces;
    Piece* salleActuelle;
};