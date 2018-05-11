#include "appareil.h"
#include "collAppareil.h"

int main()
{
	CollectionAppareil maCollection;

	Appareil appareil1("Albert", "Poste de travail", "10.2.3.4", "F201");
	maCollection.ajout(appareil1);
	Appareil appareil2("Zoe", "Imprimante", "110.3.5.4", "F205");
	maCollection.ajout(appareil2);
	Appareil appareil3("Rodrigue", "Poste" ,"12.15.3.4", "F204");
	maCollection.ajout(appareil3);
	Appareil appareil4("Louis", "Sicli" ,"60.25.3.4", "F002");
	maCollection.ajout(appareil4);
	cout << endl;
	cout << "_______________" << endl;
	cout << "_____Salle_____" << endl;
	cout << endl;

	maCollection.triParSalle();
	maCollection.affichage();


	return 0;
}