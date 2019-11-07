#include <iostream> //input output
#include "CPoint.h"


float CPoint::getX()
{
	return fltX;
}

float CPoint::getY()
{
	return fltY;
}


void CPoint::setX(float value)
{
	this->fltX = value;
}

void CPoint::setY(float value)
{
	this->fltY = value;
}

void CPoint::afficher()
{
	std::cout << "X : " << this -> getX() << std::endl;
	std::cout << "Y : " << this -> getY() << std::endl;
}

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
