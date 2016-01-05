#ifndef SEGEMENT_H
#define SEGEMENT_H
#include "point.h"
class segement
{
	public:
		segement();
		segement(double,double,double);
		void segementset(double,double,double);
	//void rotate();
	double getlength();
	double getstangle();
	double getendangle();
	private:
		double length;
		double stangle;
		double endangle;
};

#endif
