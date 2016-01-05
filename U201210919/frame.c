#include "frame.h"
 #include<Eigen/Dense>
 #include<cmath>

frame::frame()
{
}
       TaskFrame(double a=0,double b=0,double d=0);
          void WtoT(Point &p);
          void TtoW(Point &p);
          void TtoJ(Point &p,double a1,double a2);
  };
  
void frame::TaskFrame(double a,double b,double A){
      x=a;
      y=b;
      ang=A;
  }
 void frame::WorldFrame(double a,double b,double A){
      x=a;
      y=b;
      ang=A;
  }
  void frame::WtoT(Point &p){
      MatrixXd m(3,3);
      MatrixXd pt(1,3);
      double deg;
      deg=ang*PI/180;
      m(0,0)=cos(deg);
      m(0,1)=sin(deg);
      m(0,2)=0;
      m(1,0)=-sin(deg);
      m(1,1)=cos(deg);
      m(1,1)=0;
      m(2,0)=x,
      m(2,1)=y;
      m(2,2)=0;
      pt(0,0)=p.x;
      pt(0,0)=p.y;
      pt(0,2)=1;
      pt*=m;
      p.x=pt(0,0);
      p.y=pt(0,1);    
  }
  void frame::TtoW(Point &p){
      MatrixXd m(3,3);
      MatrixXd pt(1,3);
      double deg;    
      deg=ang*PI/180;
      m(0,0)=cos(deg);
      m(0,1)=sin(deg);
      m(0,2)=0;
      m(1,0)=-sin(deg);
      m(1,1)=cos(deg);
      m(1,1)=0;
      m(2,0)=x;
      m(2,1)=y;
      m(2,2)=0;
      pt(0,0)=-p.x;
      pt(0,0)=-p.y;
      pt(0,2)=1;
      pt*=m;
      p.x=pt(0,0);
      p.y=pt(0,1);
  }
  void frame::TtoJ(Point &p,double a1,double a2){
      double l,deg1,deg2,deg3;
      l=sqrt(p.x*p.x+p.y*p.y);
      deg1=atan(p.y/p.x);
      deg2=acos((a1*a1+l*l-a2*a2)/(2*a1*l));
      deg3=acos((a1*a1+a2*a2-l*l)/(2*a1*a2));
      p.x=(deg1+deg2)*180/PI;
      p.y=deg3*180/PI+180;
  }
   
