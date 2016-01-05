#ifndef POINT_H
#define POINT_H

class point
{
	public:
		point();
		point(double xx,double yy);
		double getx();
		double gety();
		void move(double dx,double dy);
		void rotate(double beta);	
		void set(double sx,double sy);
	private:
		double  x;
		double  y;
};

#endif
