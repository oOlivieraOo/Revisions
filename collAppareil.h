#ifndef COLLECTIONAPPAREIL
	#define COLLECTIONAPPAREIL

#include <vector>
#include <iostream>
#include "appareil.h"

using namespace std;

class CollectionAppareil
{
	private:
		vector<Appareil> vectAppareil;
	public:
		void ajout(Appareil monApp);
		void affichage();
		void triParSalle();
		void triParNom();
		void triParIP();
};
#endif