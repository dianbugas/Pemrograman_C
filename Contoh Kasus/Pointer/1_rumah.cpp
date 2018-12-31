#include <iostream>
#include <ctype.h>
using namespace std;

int main ()
{
	char kalimat [100];
	int i, spasi=0, jumlah=0 ,vokal=0 ,kata=0;
	cout<<"Masukan kalimat	: ";

	cin.getline(kalimat, sizeof(kalimat));

	cout<<"[ OUTPUT ] "<<endl;
	cout<<"Kata yang anda masukan adalah : \n";
    cout<<" ";
	for(i=0; kalimat[i]; i++)
	{
		if(isspace (kalimat[i]) || ispunct (kalimat[i]))
		{
			spasi++;
			cout<<" "<<endl;
			cout<<" "<<endl;
		}
		cout << kalimat[i];
	}

	cout<<"";
	for(i=0;kalimat[i];i++)
	{
		jumlah++;
		if(isspace (kalimat[i])||ispunct(kalimat[i]))
		{
			spasi++;
			if(isspace(kalimat[i+1])||ispunct(kalimat[i+1])) spasi=spasi-1;
		}
		{
			if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
				vokal++;
		}
	}

	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Jumlah karakternya adalah	: "<<jumlah<<endl;
    cout<<"Jumlah katanya adalah		: "<<spasi-1<<endl;
    cout<<"Jumlah vokalnya adalah		: "<<vokal<<" huruf"<<endl;

}
