#include <iostream>
using namespace std;
int main() {
	string keep,binario;
	int dec,cont1,cont2=0;
	char aux;
	cin >> dec;

for (; dec>=1;){	
if (dec%2==0)
{
aux='0';}
if (dec%2==1)
{
aux='1';}
dec=dec/2;
keep=keep+aux;
cont1++;
}
binario=keep;
while (cont1>0){
	binario[cont2]=keep[cont1-1];
	cont2++; cont1--;
}

cout << endl << keep << endl << binario;
	
	return 0;
}
/*
vector <int> binario;
vector<int> keep;
vector <int>:: iterator pos;
int dec,aux;
cin >> dec;

for (int i=0; dec>=1;i++)
{
aux=dec%2; dec=dec/2;
cout << aux;
keep.push_back(aux);
}

for (pos=keep.end(); binario.size()!=keep.size(); pos--){
binario.push_back(*pos);
}

cout << endl << binario.size();

return 0;
}
*/
