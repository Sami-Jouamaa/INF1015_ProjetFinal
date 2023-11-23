#include "Carte.hpp"
#include "Piece.hpp"
#include "Objet.hpp"
#include "mario.hpp"
#include "Carte.hpp"


int main(){
Carte carte;

Piece sallePrincipale("Salle principale");
Piece couloirGauche("Couloir Gauche");
Piece salleBombe("Salle avec un Tableau avec des Bombes");
Piece salleEnneigee("Salle avec un Tableau enneigé");
Piece aquarium("Aquarium");
Piece donjon("Donjon");
Piece couloirDroit("Couloir Droit");
Piece courArriere("Cour Arrière");
Piece dehors("Dehors");
Piece escaliers("En haut des escaliers");
Piece horloge("Salle avec une Horloge Géante");
Piece exposition("Salle d'exposition");
Piece courArriere("Cour arrière");
Piece infini("Escalier infini");
Piece bossFinal("Cour arrière");

sallePrincipale.connecterPieces(couloirGauche,"Ouest");
sallePrincipale.connecterPieces(couloirDroit,"Est");
sallePrincipale.connecterPieces(escaliers,"Nord");
sallePrincipale.connecterPieces(dehors,"Sud");
couloirGauche.connecterPieces(salleBombe,"Ouest");
couloirGauche.connecterPieces(donjou,"Sud");
couloirDroit.connecterPieces(courArriere,"Nord");
couloirDroit.connecterPieces(aquarium,"Est");
couloirDroit.connecterPieces(salleEnneigee,"Sud");
escalier.connecterPieces(infini,"Nord");
escalier.connecterPieces(horloge,"Est");
escalier.connecterPieces(exposition,"Ouest");
infini.connecterPieces(bossFinal,"Nord")






}