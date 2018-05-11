#ifndef APPAREIL
	#define APPAREIL

#include <iostream>
using namespace std;

class Appareil
{
	private: 

		string nom;
		string nature;
		string ip;
		string salle;

	public:
		Appareil(string unNom, string uneNature, string unIp, string uneSalle);
		Appareil();
		void affichage();
		string getSalle();
		string getNom();
		string getIP();
};
#endif