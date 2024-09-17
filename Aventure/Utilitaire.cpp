#include "Utilitaire.h"
Utilitaire::Utilitaire()
{

};
int Utilitaire::genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}