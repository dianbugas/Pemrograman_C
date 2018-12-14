
#include <iostream>
#include <math.h>
using namespace std;

int hasilD (int x1, int x2, int y1, int y2)
{
	int rumus = ((pow ((x1-x2),2)) + (pow ((y1-y2),2)));
	int hasil = sqrt(rumus);
	return hasil;
}

int main ()
{
	int x1, x2, y1, y2;



	cout<<"masukkan P1 "<<endl;
	cout<<"x: "; cin>>x1;
	cout<<"y: "; cin>>y1;

	cout<<"masukkan P2 "<<endl;
	cout<<"x: "; cin>>x2;
	cout<<"y: "; cin>>y2;

	cout<<endl;

	cout<<"jarak kedua titik: "<<hasilD(x1, x2, y1, y2);

}
