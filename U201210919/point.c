#include "point.h"
#include <math.h>

point::point()
{
}

point::point(double xx,double yy){
	x=xx;
	y=yy;
}

void point::move(double dx,double dy){
	x+=dx;
	y+=dy;
	
}
void point::rotate(double beta){
	beta=beta*3.1415926/180;
	double tempx=x*sin(beta)+y*cos(beta);
	double tempy=-x*cos(beta)+y*sin(beta);
	x=tempx;
	y=tempy;
	
}
double point::getx(){
return x;	
}
double point::gety(){
return y;	
}
void point::set(double sx,double sy){
	x=sx;
	y=sy;
}
