#include "FactoryQuete.h"
#include "Utilitaire.h"


Quete* FactoryQuete::getRandomQuete()
{
	Quete* quete(0);
	int pourcentage = (int)Utilitaire::genererNb(1, 101);
	if ((pourcentage >= 1) && (pourcentage <= 75))
	{
		quete = new Quete("Facile", Utilitaire::genererNb(1, 11), Utilitaire::genererNb(100, 1001), Utilitaire::genererNb(100, 2001), NiveauDifficulte::FACILE);
	}
	else if ((pourcentage > 75) && (pourcentage <= 90))
	{
		quete = new Quete("Moyen", Utilitaire::genererNb(10, 26), Utilitaire::genererNb(1000, 5001), Utilitaire::genererNb(2000, 4001), NiveauDifficulte::MOYEN);
	}
	else if ((pourcentage > 90) && (pourcentage <= 101))
	{
		quete = new Quete("Difficile", Utilitaire::genererNb(25, 100), Utilitaire::genererNb(5000, 35001), Utilitaire::genererNb(4000, 14001), NiveauDifficulte::DIFFICILE);
	}
	return quete;
}
