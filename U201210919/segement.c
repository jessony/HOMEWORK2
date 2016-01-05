#include "segement.h"
#include "point.h"

segement::segement()
{
}

segement::segement(double lth,double stag,double edag){
		length=lth;
		stangle=stag;
		endangle=edag;
}
double segement::getlength(){
	return length;
	
}
double segement::getstangle(){
	return stangle;
}
double segement::getendangle(){
	return endangle;
}

void segement::segementset(double lth,double stag,double edag){
		length=lth;
		stangle=stag;
		endangle=edag;
}
