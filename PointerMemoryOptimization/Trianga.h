// Trianga.h
#ifndef TRIANGA_H
#define TRIANGA_H

#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ostream>
#include <istream>

using namespace std;

class point
{
public:
	point() {}	// Constructor
	~point() {}	// Destructor
	// Observers
	int pointx();
	int pointy();
	// Overloaded Operators
	friend istream& operator >> (istream& in, point& p);		// Overloaded Cin
	friend ostream& operator << (ostream& in, const point& p);	// Overloaded Cout
private:
	int x;	// The x coordinate
	int y;	// The y coordinate
};

class triangle
{
public:
	triangle() {}	// Constructor
	~triangle() {}	// Destructor
	// Observer
	float area();
	// Overloaded Operators
	friend istream& operator >> (istream& in, triangle& t);			// Overloaded Cin
	friend ostream& operator << (ostream& in, const triangle& t);	// Overloaded Cout
private:
	point a;	// Point a
	point b;	// Point b
	point c;	// Point c
};
// Determinant of two points
inline float det(point p1, point p2);

#endif
