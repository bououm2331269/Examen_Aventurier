#include "Aventurier.h"
#include <iostream>
using namespace std;
Aventurier::Aventurier()
{
	niveau = 90;
}

Aventurier::~Aventurier()
{
	for (auto quete : tabQuete)
	{
		delete quete;
	}
}

void Aventurier::afficherQuete()
{
	cout << "VOICI LES QUETES REALISEES PAR MON AVENTURIER";
	for (auto it = tabQuete.begin(); it != tabQuete.end(); it++)
	{
		cout << endl;
		cout << (*it)->to_string();
		cout << endl;
	}
}

void Aventurier::ajouterQuete(Quete* quete)
{
	tabQuete.push_back(quete);
}

int Aventurier::getNiv()
{
	return niveau;
}
