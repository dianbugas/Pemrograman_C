#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define M_PI 3.14159265358979323846
float tabung(float r, float t){
	return M_PI*r*r*t;
}

float kerucut(float r, float t){
	return M_PI*r*t/3;
}

float luaspermukaanbola(float r){
	return 4*M_PI*r*r;
}

float luaspermukaantabung(float r, float t){
	return (2*M_PI*r*r)+(2*M_PI*r*t);
}

float luaspermukaankerucut(float r, float s){
	return (M_PI+r+r)+(M_PI*r*s); 
}


int main ()
{
	float a,b,c,d,e;
	a = tabung(7,10);
	b = kerucut(7,10);
	c = luaspermukaanbola(7);
	d = luaspermukaantabung(7,10);
	e = luaspermukaankerucut(7,4);
	cout<<"contoh r = 7"<<endl;
	cout<<"contoh t = 10"<<endl;
	cout<<"contoh s = 4"<<endl;
	cout<<"volume tabung : "<<a<<endl;
	cout<<"volume kerucut : "<<b<<endl;
	cout<<"luas permukaan bola : "<<c<<endl;
	cout<<"luas permukaan tabung : "<<d<<endl;
	cout<<"luas permukaan kerucut : "<<e<<endl;
	return 0;
}
