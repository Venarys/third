#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <iostream>

namespace VECTOR
{
	class Vector
	{
	public:
		enum MODE {RECT,POL};
	private:
		double x;
		double y;
		double mag;
		double ang;
		MODE mode;
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();
	public:
		Vector();
		Vector(double a,double b,MODE mode);
		friend std::ostream& operator<<(std::ostream& os,const Vector& a);
	};
}

#endif