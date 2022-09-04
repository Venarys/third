#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	//cout << 2*asin(1) << endl; <-pi
	double reg_to_ang = 90/asin(1);
	cout << reg_to_ang << endl;
	cout << atan2(y,x)*reg_to_ang << endl;
	return 0;
}