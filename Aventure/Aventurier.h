#pragma once
#include <vector>
#include <string>
#include "Quete.h"
using std::vector;
using std::string;
class Aventurier
{
private:
	int niveau;
	vector<Quete*>tabQuete;

public:
	Aventurier();
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();
};

