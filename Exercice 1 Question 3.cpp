
#include "Circle.h"

int main()
{
	Circle A, B, C; 
	int pa1, pa2, pb1, pb2, pc1, pc2, r1, r2, r3; 
	cout << "enter the center point and radius of 3 circles: " << endl; 
	//comment faire avec les parenthese ? 
	char i,j,k; 

	cin >> i >> pa1 >> j >> pa2 >> k >> r1; 
	A.setCenter(pa1, pa2); 
	A.setRadius(r1); 

	cin >> i >> pb1 >> j >> pb2 >> k >> r2;
	B.setCenter(pb1, pb2);
	B.setRadius(r2); 

	cin >> i >> pc1 >> j >> pc2 >> k >> r3;
	C.setCenter(pc1, pc2);
	C.setRadius(r3);

	cout << "perimeter: A: " << A.perimeter() << " B: " << B.perimeter() << " C: " << C.perimeter() << endl;
	cout << "area:  A: " << A.area() << " B: " << B.area() << " C: " << C.area() << endl;
	cout << "enter points until (0,0):" << endl;

	int x=1 , y=1 ;
	Point E;
	int a=0 , b=0 ,c=0 ; 
	while (true)
	{
		char z;
		cin >> z >> x >> z >> y >> z;
		if (x == 0 && y == 0) break;
		E.setX(x); 
		E.setY(y); 
		if (A.onInOut(E) != 1)
			a++; 
		B.onInOut(E);
		if (B.onInOut(E) != 1)
			b++;
		C.onInOut(E);
		if (C.onInOut(E) != 1)
			c++;
	}
	cout << "num of points in circle: " << "A:" << a << " B:" << b << " C:" << c; 

	return 0;
}