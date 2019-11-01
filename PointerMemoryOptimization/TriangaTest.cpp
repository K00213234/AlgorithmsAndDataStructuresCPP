// TriangaTest.cpp

#include <iostream>
#include "Trianga.h"

int main()
{
	triangle t;
	while(cin >> t)
		cout << "The area of triangle " << t << " is "  << t.area() << endl;
	return 0;
}