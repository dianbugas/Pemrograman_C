#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct datapenduduk {
  string negara;
  double jumlah;
  float persen;
} ;

struct dataimpor {
  string nama;
  double konsumsi;
  double impor;
  double nilai;
  int ratio;
} ;

void printDataPenduduk(datapenduduk x){
	cout<<x.negara<<"|";
	cout<<setprecision(0)<<fixed<<x.jumlah<<"|";
	cout<<setprecision(0)<<fixed<<x.persen<<"|";
	cout<< endl;
}

void printDataImpor(dataimpor y){
	cout<<y.nama<<"|";
	cout<<setprecision(0)<<fixed<<y.konsumsi<<"|";
	cout<<setprecision(0)<<fixed<<y.impor<<"|";
	cout<<setprecision(0)<<fixed<<y.nilai<<"|";
	cout<<y.ratio<<"|";
	cout<< endl;
}

int main ()
{
	datapenduduk a = {"Tiongkok",1384950000,18.7};
	datapenduduk a1 = {"India",1311160000,18.7};
	datapenduduk a2 = {"Amerika Serikat",326566000,4.4};
	datapenduduk a3 = {"Indonesia",257912349,3.44};
	datapenduduk a4 = {"Brasil",208286000,2.81};
	datapenduduk a5 = {"Pakistan",188925000,2.55};
	datapenduduk a6 = {"Nigeria",182202000,2.46};
	datapenduduk a7 = {"Bangladesh",162993000,2.2};
	datapenduduk a8 = {"Rusia",147112930,1.98};
	datapenduduk a9 = {"Jepang",126890000,1.71};

	cout<<"negara|";
	cout<<"jumlah penduduk|";
	cout<<"%";
	printDataPenduduk(a);
	printDataPenduduk(a1);
	printDataPenduduk(a2);
	printDataPenduduk(a3);
	printDataPenduduk(a4);
	printDataPenduduk(a5);
	printDataPenduduk(a6);
	printDataPenduduk(a7);
	printDataPenduduk(a8);
	printDataPenduduk(a9);

	cout<<endl;

	dataimpor b = {"Beras",33500000,2750000,1500000,8};
	dataimpor b1 = {"Kedelai",3100000,1847900,2500000,60};
	dataimpor b2 = {"Gula",5500000,2700000,1500000,18};
	dataimpor b3 = {"Gandum",5500000,5500000,13000000,100};
	dataimpor b4 = {"Jagung",18800000,2068000,10200000,11};

	cout<<"komoditas Pangan|";
	cout<<"konsumsi(ton)|";
	cout<<"volume impor(ton)|";
	cout<<"nilai impor(ribu USD)|";
	cout<<"ratio impor/konsumsi(%)|";

	printDataImpor(b);
	printDataImpor(b1);
	printDataImpor(b2);
	printDataImpor(b3);
	printDataImpor(b4);
	return 0;
}
