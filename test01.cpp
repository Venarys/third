#include "vector.h"
#include <iostream>
using namespace std;
int main()
{
	using VECTOR::Vector;
	Vector v1;
	Vector v2(1,1,Vector::RECT);
	Vector v3(1,45,Vector::POL);
	v1 = v2;
	cout << v1 << endl << v2 << endl << v3 << endl;
	return 0;
}