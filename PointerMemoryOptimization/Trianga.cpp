// Trianga.cpp
#include "Trianga.h"
#include <iostream>

// Point Functions
// Observers
int point::pointx()
// Returns the x coordinate.
{
	return x;
}
int point::pointy()
// Returns the y coordinate.
{
	return y;
}
// Overloaded Operators
// Overloaded Cin
istream& operator >> (istream& in, point& p)
// Takes in a point p.
// Checks if a complete point is given.
{
	if((in >> p.x) && !(in >> p.y))
	{
		cout << "Incomplete point given; exiting\n";
		exit (-1);
	}
	return in;
}
// Overloaded Cout
ostream& operator << ( ostream& out, const point& p)
// Prints out a point p in the format (x, y).
{
	return out << "(" << p.x << ", " << p.y << ")";
}

// Triangle Functions
// Observer
float triangle::area()
// Calculates the area of the triangle given 3 points.
// The private data members,i.e. the points, are not altered.
{
	float det1, det2, det3;
	det1 = det(b, c);	// Calculates the Determinant of points b and c.
	det2 = det(a, c);	// Calculates the Determinant of points a and c.
	det3 = det(a, b);	// Calculates the Determinant of points a and b.
	return (fabs(det1 - det2 + det3) / 2);	// Returns the area of the triangle.
}
// Overloaded Operators
// Overloaded Cin
istream& operator >> (istream& in, triangle& t)
// Checks if a triangle is being entered.
// If a triangle is being entered it then checks that a complete triangle is entered.
{
	if(!(in >> t.a))	// Check if no triangle is entered.
		exit(0);		// Exit.
	if(!(in >> t.b))	// Check if the triangle is incomplete.
	{
		cout << "Incomplete triangle given; exiting\n";	// Error Message.	
		exit (-1);										// Exit with error.
	}
	if(!(in >> t.c))	// Check if the triangle is incomplete.
	{
		cout << "Incomplete triangle given; exiting\n";	// Error Message.
		exit (-1);										// Exit with error.
	}
	return in;
}
// Overloaded Cout
ostream& operator<< (ostream& out, const triangle& t)
// Prints out a triangle t in the format [ (x1, y1), (x2, y2), (x3, y3) ].
{
	return out << "[ " << t.a << ", " << t.b << ", " << t.c << " ]";
}

// Determinat
inline float det(point p1, point p2)
// Calculates the Determinant of two points
{
	return (p1.pointx() * p2.pointy() - p2.pointx() * p1.pointy());
}