#include <iostream> //input output
#include "CPoint.h"

//geteurs
float CPoint::getX()
{
	return fltX;
}

float CPoint::getY()
{
	return fltY;
}

//seteurs
void CPoint::setX(float value)
{
	this->fltX = value;
}

void CPoint::setY(float value)
{
	this->fltY = value;
}

//but : deplacer le point x et y
void CPoint::deplacer(float fltX, float fltY)
{
	this->fltX+= fltX;
	this->fltY += fltY;
}


//but recupérer l'abscisse sans utilise l'attribue de la classe
float CPoint::abscisse()
{
	return this->getX();
}

//but recupérer l'ordonner sans utilise l'attribue de la classe
float CPoint::ordonner()
{
	return this->getY();
}

//constructeur avec parametre
CPoint::CPoint(float nX, float nY)
{
	this->fltX = nX;
	this->fltY = nY;
}
