#include <iostream>
using namespace std;

int main()
{
int j,i,a[2][2],b[2][2],c[2][2];
a[0][0]=1;
a[0][1]=2;
a[1][0]=3;
a[1][1]=4;
b[0][0]=1;
b[0][1]=2;
b[1][0]=3;
b[1][1]=4;

cout<<"Matrik A"<<endl;
for (i=0; i<2; i++){
	for(j=0;j<2;j++){

	cout<<a[i][j]<<"    ";
	}
	cout<<endl;
}
cout<<endl;
cout<<"Matrik B"<<endl;
for (i=0; i<2; i++){
	for(j=0;j<2;j++){

	cout<<b[i][j]<<"    ";
	}
	cout<<endl;
}
cout<<endl;
c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
cout<<"Matrik A ATAU Hasil Perkalian"<<endl;
for (i=0; i<2; i++){
	for(j=0;j<2;j++){
	cout<<c[i][j]<<"    ";

	}
    cout<<endl;
}
}




