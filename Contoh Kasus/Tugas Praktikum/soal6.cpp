#include <iostream>
#include <string>
using namespace std;

bool check(string a){
	return a.compare("a");
}
int main ()
{
	string b;
	cout<<"Masukan huruf : ";
	cin>>b;
	bool c = check(b);
	cout<<!c;
	return 0;
}
