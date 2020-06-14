#include <iostream>
#include <vector>
#include <string.h>
#include <locale.h>
using namespace std;
string dec_bin(int dec){
	string keep,binario;
	int cont1,cont2=0;
	char aux;

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

	return binario;
}

vector<int> frase_ascii (string frase){
	vector<int> ascii;
	int decimal;
	for (int i=0; i<frase.length(); i++){
		decimal=(int)frase[i];
		ascii.push_back(decimal);
	}
	return ascii;
}

int main() {
setlocale (LC_ALL, "Poruguese");

vector<int> mostra;
string frase;
getline (cin, frase);
mostra=frase_ascii(frase);
cout << mostra.size();

return 0;
}
