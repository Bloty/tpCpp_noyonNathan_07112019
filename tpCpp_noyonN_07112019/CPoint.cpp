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

//but : afficher les coordonnées cartésiennes
void CPoint::afficher()
{
	std::cout << "X : " << this -> getX() << std::endl;
	std::cout << "Y : " << this -> getY() << std::endl;
}

//but : deplacer le point x et y
void CPoint::deplacer(float fltX, float fltY)
{
	this->fltX+= fltX;
	this->fltY += fltY;
}

//constructeur avec parametre
CPoint::CPoint(float nX, float nY)
{
	this->fltX = nX;
	this->fltY = nY;
}
