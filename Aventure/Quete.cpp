#include "Quete.h"

Quete::Quete()
{
	nom = "";
	nivMin = 0;
	recompenseOr = 10;
	expRecu = 3;
	nivDifficulte = NiveauDifficulte::FACILE;
}

Quete::Quete(string nomQuete,int nivMinQuete, int recompenseOrQuete, int expRecuQuete, NiveauDifficulte nivDifficulteQuete)
{
	 nom = nomQuete;
	 nivMin = nivMinQuete;
	 recompenseOr = recompenseOrQuete;
	 expRecu = expRecuQuete;
	 nivDifficulte = nivDifficulteQuete;
}

Quete::~Quete()
{
	
}

NiveauDifficulte Quete::getDifficulte()
{
	return nivDifficulte;
}

int Quete::getNivMin()
{
	return nivMin;
}

int Quete::getRecompense()
{
	return recompenseOr;
}

int Quete::getExp()
{
	return expRecu;
}

string Quete::to_string()
{
	string info = "";
	info.append("Nom: " + nom + "\n");
	info.append("NiveauMin: " + std::to_string(this->getNivMin()) + "\n");
	info.append("Recompense en Or : " + std::to_string(this->getRecompense()) + "\n");
	info.append("Experience recue : " + std::to_string(this->getExp()) + "\n");
	//info.append("Niveau de difficulté : " + std::to_string(this->getDifficulte()) + "\n");
	return info;
}
