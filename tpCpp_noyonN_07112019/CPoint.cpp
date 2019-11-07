#include <iostream> //input output
#include <cmath>
#include "CPoint.h"

//geteurs-----------------------------------------------
float CPoint::getX()
{
	return fltX;
}

float CPoint::getY()
{
	return fltY;
}

//seteurs------------------------------------------------
void CPoint::setX(float value)
{
	this->fltX = value;
}

void CPoint::setY(float value)
{
	this->fltY = value;
}

//Membres-----------------------------------------

//but : deplacer le point x et y
//entrer : les point x et y
//sortie : les coodonner deplacer
void CPoint::deplacer(float fltX, float fltY)
{
	this->fltX+= fltX;
	this->fltY += fltY;
}


//but recupérer l'abscisse sans utilise l'attribue de la classe
//entrer :
//sortie : abscisse du point
float CPoint::abscisse()
{
	return this->getX();
}

//but : recupérer l'ordonner sans utilise l'attribue de la classe
//entrer :
//sortie : ordonner du point
float CPoint::ordonner()
{
	return this->getY();
}

//but : afficher l'homothétie
//entrer : le rapport
//sortie : l'homothétie afficher
void CPoint::homothétie(float rapport)
{
	std::cout << "homothétie de X : " << this->abscisse()*rapport << std::endl;
	std::cout << "homothétie de Y : " << this->ordonner()*rapport << std::endl;
}

//but : rotation du point avec l'origine
//entrer : angle et le point
//sortie : les coordonner du point changer
void CPoint::rotation(float fltangle)
{
	fltangle *= 3.141592653589 / 180;

	float fltXPoint = this->abscisse();
	float fltYPoint = this->ordonner();

	this->setX(((fltXPoint)*cos(fltangle)) - (float)((fltYPoint)*sin(fltangle)));
	this->setY(((fltXPoint)*sin(fltangle)) - (float)((fltYPoint)*cos(fltangle)));
}

float CPoint::rho()
{
	return ;
}



//constructeur avec parametre--------------------------------------------
CPoint::CPoint(float nX, float nY)
{
	this->fltX = nX;
	this->fltY = nY;
}
