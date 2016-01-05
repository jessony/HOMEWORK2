#include "solver.h"
#include "point.h"
#include <math.h>
#include "segement.h"
#include<iostream>
using namespace std;
solver::solver()
{
}
void solver::solverangleset(double ag1,double ag2){
	    joint1angle=ag1;
        joint2angle=ag2;	
	
}
void solver::solverdestpointset(double dex,double dey){
	destpoint.set(dex,dey);
}
void solver::normalsolve(segement s1,segement s2){
	double ag1=joint1angle*3.1415926/180;
	double ag2=joint2angle*3.1415926/180;
	if(joint1angle<s1.getstangle()||joint1angle>s1.getendangle()) cout<<"segement1的角度超过运动范围"<<endl;
	else{
			if(joint2angle<s2.getstangle()||joint2angle>s2.getendangle()) cout<<"segement2的角度超过运动范围"<<endl;
			else{
					double tempdestx=cos(ag1)*s1.getlength()+cos(ag2)*s2.getlength();
	                double tempdesty=sin(ag1)*s1.getlength()+sin(ag2)*s2.getlength();
	                destpoint.set(tempdestx,tempdesty);
	                cout<<"机械手的末端坐标为"<<endl;
					cout<<"(" <<destpoint.getx()<<","<<destpoint.gety()<<")"<<endl;
			}

	}
     
	
}
void solver::inversolve(segement s1,segement s2){
	double xf=destpoint.getx()*destpoint.getx();
	double yf=destpoint.gety()*destpoint.gety();
	double temp1=xf+yf+s2.getlength()*s2.getlength()-s1.getlength();
	double temp2=asin(temp1/(2*s2.getlength()*sqrt(xf+yf)));
	double bt=atan(destpoint.getx()/destpoint.gety());
	joint1angle=temp2-bt;//第一个角的解 
    double xf2=destpoint.getx()*destpoint.getx();
	double yf2=destpoint.gety()*destpoint.gety();
	double temp3=xf+yf-s2.getlength()*s2.getlength()+s1.getlength();
	double temp4=asin(temp3/(2*s1.getlength()*sqrt(xf2+yf2)));
	joint2angle=temp4-bt;//第二个角的解 
	if(joint1angle<s1.getstangle()||joint1angle>s1.getendangle()) cout<<"segement1的角度超过运动范围"<<endl;
	else{
			if(joint2angle<s2.getstangle()||joint2angle>s2.getendangle()) cout<<"segement2的角度超过运动范围"<<endl;
			else{
				 cout<<"机械手的各个segement转动角度为"<<endl;
				 cout<<"(" <<joint1angle<<","<<joint2angle<<")"<<endl;
				
			}
		
	}
	
	
	
	
}
double solver::get_solutionpointx(){
	return  destpoint.getx();
}
double solver::get_solutionpointy(){
	return destpoint.gety();
}
double solver::get_solutionangle1(){
	return joint1angle;
}
double solver::get_solutionangle2(){
	return joint2angle;
}
