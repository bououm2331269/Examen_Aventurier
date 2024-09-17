#pragma once

#include <string>
using std::string;
enum class NiveauDifficulte
{
	FACILE,
	MOYEN,
	DIFFICILE
};
class Quete
{
private:
	string nom;
	int nivMin;
	int recompenseOr;
	int expRecu;
	NiveauDifficulte nivDifficulte;

public:
	Quete();
	Quete(string nomQuete, int nivMinQuete, int recompenseOrQuete, int expRecuQuete, NiveauDifficulte nivDifficulteQuete);
	~Quete();
	NiveauDifficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	virtual string to_string();
};

