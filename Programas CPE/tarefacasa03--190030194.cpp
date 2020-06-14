// Ismael Ithalo Barbosa Pinto  190030194;
// Muito difícil, não consegui lidar direito com vector bidimensional;
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Função que ecebe vetor com os decimais e retorna vetor de vetor de int com os binários.
// possui a mais algumas condições de preenchimento para me auxiliar no programa
vector<vector<int>> dec_bin(vector<int> ascii){
	vector<int>:: iterator aponta;

	vector<int> decimal;
	vector<int> quantidade;
	vector<vector<int>> binario;
	
	int dec,aux,contnum=0,cont1=0,contall=0;

	
for (aponta=ascii.begin(); aponta<ascii.end(); aponta++){
	dec=*aponta;
	for (; dec>=1;){
aux=dec%2;
dec=dec/2;
decimal.push_back(aux);
if (aux==1){cont1++;}
contnum++;
contall++;
		}
		if (contnum==6){
			decimal.push_back(0);
			contnum=0;
		}
		if (contnum<8){
			decimal.push_back(0);
			contnum=0;
			contall++;
		}
		if (cont1%2==0){
		decimal.push_back(0);
		cont1=0;}
		else {
		decimal.push_back(1);
		cont1=0;
		}
		
		reverse(decimal.begin(),decimal.end());
		binario.push_back(decimal);
		decimal.clear();
		
		if (aponta==ascii.end()-1){
			quantidade.push_back(contall);
			binario.push_back(quantidade);
		}
	}	
	return binario;
}

// Função que recebe a fraase e retorna vetor de int com os decimais
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
setlocale (LC_ALL, "Portuguese");
srand (time(0));
cout << "Por favor, digite a frase a ser eviada como binário." << endl;
string frase;
getline (cin, frase);

int quantidade=frase.length(),erro1,erro2;
// Como fiz matriz bidimensional precisei gerar dois erros.
erro1=rand()%quantidade;
erro2=rand()%6+2;

vector<vector<int>> binario;
vector<vector<int>> auxiliar;
binario = dec_bin (frase_ascii(frase));

cout << endl << "A frase em binário é a seguinte:" << endl;
cout << "Legenda: 1ª casa: Bit de paridade." << endl;
cout << "         2ª casa: Bit de preenchimento (caso o binário tenha menos de 8 bits)." << endl;
cout << "         3ª casa em diante: Caractere em binário." << endl;
cout << "         Última informação: Tamanho da sequência." << endl << endl;

// Mostra as informações da matriz.
for (const vector<int> &mostra : binario){
	for (int x : mostra ) cout<< x;
	cout << endl;
}

auxiliar=binario;
if (binario[erro1][erro2]==0){
	auxiliar[erro1][erro2]=1;}
else{auxiliar[erro1][erro2]=0;}

// Mostra onde ocoreu o erro	 
cout << endl << "Erro no bit de coluna: " << erro1 << " e linha: " << erro2 << "." << endl;
cout << "O bit era: " << binario[erro1][erro2] << " e virou " << auxiliar[erro1][erro2] << "." << endl;


return 0;
}
