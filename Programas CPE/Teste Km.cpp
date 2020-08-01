#include <iostream>
#include <locale.h>
using namespace std;
int main () {
	setlocale (LC_ALL, "Portuguese");
	
	double d;
	cout << "Digite a quilometragem percorrida." << endl;
	cin >> d;

	{
	if (d<=50){
		cout << "O valor é R$ " << 1.75*d << endl;}	
		else if (50<d && d<=150){
			cout << "O valor é R$ " << ((d-50)*1.65)+87.5 << endl;}
		else
			cout << "O valor é R$ " << ((d-150)*1.5)+252.5 << endl; 
		}

	
	
	return 0;

}
