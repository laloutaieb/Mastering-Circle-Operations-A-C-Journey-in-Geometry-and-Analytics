#pragma once
#include <iostream>
#include <string>
#include<math.h>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	void setX(int myX);
	void setY(int myY);
	int getX();
	int getY();
};