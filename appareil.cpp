#include "appareil.h"

void Appareil::affichage()
{
	cout << "Nom de la salle: " << nom << endl;
	cout << "Nature : " << nature << endl;
	cout << "IP : " << ip << endl;
	cout << "Salle " << salle << endl << endl;
}

Appareil::Appareil()
{

}

Appareil::Appareil(string unNom, string uneNature, string unIp, string uneSalle)
{
	nom = unNom;
	nature = uneNature;
	ip = unIp;
	salle = uneSalle;
}

string Appareil::getSalle()
{
	return salle;
}

string Appareil::getNom()
{
	return nom;
}

string Appareil::getIP()
{
	return ip;
}