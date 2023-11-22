class Piece
{
public:
    Piece(string nom, string description) : nom(nom), description(description), nord(std::make_shared<Piece>()), sud(std::make_shared<Piece>()), 
    est(std::make_shared<Piece>()), ouest(std::make_shared<Piece>()) {}

private:
    std::string nom;
    std::string description;
    std::shared_ptr<Pieces> nord;
    std::shared_ptr<Piece> sud;
    std::shared_ptr<Piece> est;
    std::shared_ptr<Piece> ouest;

};