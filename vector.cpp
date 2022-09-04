#include "vector.h"
#include <cmath>

namespace VECTOR
{
	using std::endl;
	using std::cout;
	const double rta = 90/asin(1)
	Vector::Vector(){};
	Vector::Vector(double a,double b,MODE mode)
	{
		if (mode == RECT)
		{
			x = a;
			y = b;
			this->mode = mode;
			set_mag();
			set_ang();
		}
		else if (mode == POL)
		{
			mag = a;
			ang = b/rtg;
			this->mode = mode;
			set_x();
			set_y();
		}
		else
			std::cout << "FFFF" << endl;
	}
	Vector::set_x()
	{
		x = mag*std::cos(ang);
	}
	Vector::set_y()
	{
		y = mag*std::sin(ang);
	}
	Vector::set_mag()
	{
		mag = std::sqrt(x*x + y*y);
	}
	Vector::set_ang()
	{
		ang = std::atan2(y,x);
	} 
	std::ostream& operator<<(std::ostream& os,const Vector& a)
	{
		if (a.mode == RECT)
			cout << "x=" << a.x << ",y=" << a.y << endl;
		else if (a.mode == POL)
			cout << "m=" << a.mag << ",a=" << a.ang << endl；
		else
			cout << "MODE error" << endl;
	}
}