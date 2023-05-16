#include "Circle.h"

void Circle::setCenter(int x, int y)
{
	center.setX(x); // center parceque c'est un point et meme si c'est prive comme on est dans la class circle ca marche
	//mais commme x est prive dans point il faut utilise la fonction set pour change la donne. et on met x entre parenthese parce c une fonction 
	// et une fonction se me toujour avec une parenthese 
	center.setY(y); 
}
void Circle::setRadius(int myRadius)
{
	radius = myRadius; // et la c'est egale parce que c pas une fonction 
}
Point Circle::getCenter()
{
	return Point();
}
int Circle::getRadius()
{
	return radius;
}
float Circle::area()
{
	float a; 
	a = (float)3.14 * radius * radius; 
	return a; 
}

float Circle::perimeter()
{
	return (float)2 * 3.14 * radius; 
}

int Circle::onInOut(Point p)
{
	int d;
	d = sqrt( pow(p.getX() - center.getX(),2) + pow(p.getY() - center.getY(), 2));
	if (d < radius)
		return -1; 
	if (d > radius)
		return 1;
	if (d = radius)
		return 0; 
	return 0;
}


/* cercle a;  
a.perimetre(); 
*/ 

