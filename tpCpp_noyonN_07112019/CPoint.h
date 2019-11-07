#pragma once
//point dans un plan

class CPoint
{
private:
	//Donn�e membre / attribut membre de la classe
	float fltX;
	float fltY;

public:
	//prototype
	float getX();
	float getY();

	void setX(float value);
	void setY(float value);

	void deplacer(float fltX, float fltY);
	float abscisse();
	float ordonner();

	//constructeur
	CPoint(float fltX, float fltY);
};