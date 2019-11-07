#include <iostream> //input output
#include <cstdlib>
#include "CPoint.h"

int main()
{
	//Exercice 1)-------------------------------
	CPoint ptMonPoint(10, 5);

	ptMonPoint.afficher();

	ptMonPoint.deplacer(5,5);

	ptMonPoint.afficher();

	system("pause");

	return 0;
}