#include <iostream> //input output
#include <cstdlib>
#include <cmath>
#include "CPoint.h"

int main()
{
	//Exercice 3)-------------------------------
	//declatation
	CPoint ptMonPoint(15, 10);

	//afficher l'homoth�tie
	ptMonPoint.homoth�tie(5);

	//rotation
	ptMonPoint.rotation(90);
	std::cout << "X : " << ptMonPoint.abscisse()<< std::endl;
	std::cout << "Y : " << ptMonPoint.ordonner()<< std::endl;


	system("pause");

	return 0;
}