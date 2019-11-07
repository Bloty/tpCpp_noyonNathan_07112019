#include <iostream> //input output
#include <cstdlib>
#include "CPoint.h"

int main()
{
	//Exercice 2)-------------------------------
	//declatation
	CPoint ptMonPoint(0, 5);

	//affichage
	std::cout << "X : " << ptMonPoint.abscisse() << std::endl;
	std::cout << "X : " << ptMonPoint.ordonner() << std::endl;

	//déplacement
	ptMonPoint.deplacer(5,5);

	//affichage
	std::cout << "X : " << ptMonPoint.abscisse() << std::endl;
	std::cout << "X : " << ptMonPoint.ordonner() << std::endl;

	system("pause");

	return 0;
}