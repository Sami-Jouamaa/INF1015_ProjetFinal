#include "Carte.hpp"
#include "Piece.hpp"
#include "Objet.hpp"
#include "mario.hpp"
#include "Carte.hpp"

#include <iostream>

using namespace std;


int main(){
Carte carte;

Piece sallePrincipale("Salle principale", "Première pièce en entrant");
Piece couloirGauche("Couloir Gauche", "Connecté au donjon et Tableau de bombes"); //Porte gauche
Piece salleBombe("Salle avec un Tableau avec des Bombes", "Cul-de-sac"); //Tableau bombe
Piece salleEnneigee("Salle avec un Tableau enneigé", "Portal vers le pays des pingouins");
Piece aquarium("Aquarium", "Portail vers le niveau aquatique"); //Tableau  eau
Piece donjon("Donjon", "Portail vers le niveau de lave"); //Niveau lave
Piece couloirDroit("Couloir Droit", "Connecté au tableau d'eau, cour arrière et tableau de neige"); //Porte droite
Piece courArriere("Cour Arrière", "Cul-de-sac");
Piece dehors("Dehors", "À l'extérieur du château"); //Salle initiale
Piece escaliers("En haut des escaliers", "Début du deuxième étage");
Piece horloge("Salle avec une Horloge Géante", "Portail vers horloge"); //Tableau horloge
Piece exposition("Salle d'exposition", "Salle avec une statue");
//Piece courArriere("Cour arrière"); On a déjà une cour arrière
Piece infini("Escalier infini", "Escalier interminable jusqu'au boss");
Piece bossFinal("Boss final", "Bowser");

sallePrincipale.connecterPieces(couloirGauche,"Ouest");
sallePrincipale.connecterPieces(couloirDroit,"Est");
sallePrincipale.connecterPieces(escaliers,"Nord");
sallePrincipale.connecterPieces(dehors,"Sud");
couloirGauche.connecterPieces(salleBombe,"Ouest");
couloirGauche.connecterPieces(donjon,"Sud");
couloirDroit.connecterPieces(courArriere,"Nord");
couloirDroit.connecterPieces(aquarium,"Est");
couloirDroit.connecterPieces(salleEnneigee,"Sud");
escaliers.connecterPieces(infini,"Nord");
escaliers.connecterPieces(horloge,"Est");
escaliers.connecterPieces(exposition,"Ouest");
infini.connecterPieces(bossFinal, "Nord");

cout << "Super Marios Bros" << endl; //Nom du jeu
cout << "Contrôles sont :" << endl;
cout << '\t' << "N pour aller au Nord de la pièce où vous êtes en ce moment." << endl;
cout << '\t' << "S pour aller au Nord de la pièce où vous êtes en ce moment." << endl;
cout << '\t' << "E pour aller au Nord de la pièce où vous êtes en ce moment." << endl;
cout << '\t' << "O pour aller au Nord de la pièce où vous êtes en ce moment." << endl;
cout << '\t' << "START pour commencer le jeu" << endl;
cout << '\t' << "EXIT pour sortir du jeu" << endl;
cout << "Type START to start the game" << endl;

cout << "----" << sallePrincipale.getNom() << "----" << endl; //Piece initiale






}