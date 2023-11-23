class Objet
{
public:
    Objet(string nom, string description), nom(nom), description(description) {}

    void getDescription(){
        return description;
    }
    void getnom(){
        return nom;
    }


private:
    std::string nom;
    std::string description;
};