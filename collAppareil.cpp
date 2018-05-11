#include "collAppareil.h"
#include "appareil.h"

void CollectionAppareil::ajout(Appareil monApp)
{
	vectAppareil.push_back(monApp);
}

void CollectionAppareil::affichage()
{
	for (unsigned int nbTour=0; nbTour < vectAppareil.size(); nbTour++)
	{
		vectAppareil[nbTour].affichage();
	}
}

void CollectionAppareil::triParSalle()
{
	bool permutation;
	do {
		permutation = false;
		for (unsigned int numeroCase = 0; numeroCase < vectAppareil.size()-1; numeroCase++)
		{
			if (vectAppareil[numeroCase].getSalle() > vectAppareil[numeroCase+1].getSalle())
			{
				//cout<<"numeroCase "<<numeroCase<<endl;
				Appareil temporaire;
				temporaire = vectAppareil[numeroCase];
				vectAppareil[numeroCase]= vectAppareil[numeroCase+1];
				vectAppareil[numeroCase+1] = temporaire;
				permutation = true;
			}
		}
	} while (permutation);
}