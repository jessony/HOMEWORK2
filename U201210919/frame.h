
#ifndef FRAME_H
#define FRAME_H
#include "point.h"
class frame
{
	public:
		frame();
		TaskFrame(double a=0,double b=0,double d=0);
		WorldFrame(double a=0,double b=0,double d=0);
          void WtoT(Point &p);
          void TtoW(Point &p);
          void TtoJ(Point &p,double a1,double a2);
        
		
	private:
    double x;
    double y;
    double xangle;
		
};

#endif
