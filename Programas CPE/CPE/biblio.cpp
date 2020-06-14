#include <iostream>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
long long int fatorial (int num){
	long long int resultado = 1;
	for (num; num >= 2 ; num--)
	{
		resultado = resultado * num;
	}
	return resultado;
}
vector<int> tobin(int num) {
	int divisor=num;
	vector<int> guarda;
	vector<int>::iterator pont;
	while (divisor != 0)
	{	pont = guarda.begin();
		if(divisor % 2 > 0){guarda.insert(pont, 1);}
		else{guarda.insert(pont, 0);}
		divisor = divisor/2;}
	return guarda;
}
int todec (vector<int> bin){
	int out;
	for(int i = 0; i < bin.size(); i++)
	{
		if(bin[bin.size() - i - 1] == 1)
		{
			out = out + pow(2 , i);
		}	
	}
	return out;
}
void vectorintcout (vector<int> vetor) {
	for(int i = 0; i < vetor.size(); i++)
	{
		cout << vetor[i];
		//cout <<"|" << i << " " << vetor[i] << "|"; //Este comando o vetor com tipos enumerados.
	}
}
void vectorstringcout (vector<string> vetor) {
	for(int i = 0; i < vetor.size(); i++)
	{
		cout << vetor[i];
	}
}
void ShowText(vector<string>& Text){
	cout << "Texto atual.\n";
	for (int Cont=0; Cont<Text.size(); Cont++)
	cout << Text[Cont] << endl;
}
void SearchText (vector<string>& Text){
	string LookFor;
	int Checker=0;
	cout << "Busca no texto.\n";
	cout << "Qual palavra você deseja buscar no texto?\n";
	cin >> LookFor;
	size_t Inspection;
	for (int Cont=0; Cont<Text.size(); Cont++)
	{
		Inspection=Text[Cont].find(LookFor);
  		if (Inspection==std::string::npos) 
  		{
  			
		}
  		else
  		{
  			int Times=0;
      		while (Inspection!=std::string::npos) 
			{
           		Times++;
           		Checker++;
           		cout << LookFor << " encontrado pela " << Times << "° vez em: " << Text[Cont] << "\n"; 
           		int Size=LookFor.length();
           		Inspection=Text[Cont].find(LookFor,Inspection+1);
           }
		}
	}
	if (Checker==0)
	cout << "Palavra não encontrada.\n";
}
void ChangeText (vector<string>& Text){
	int Line=0;
	cout << "Alteração de texto.\n";
	cout << "Qual linha você deseja alterar?\n";
	cin >> Line;
	if ((Line<1)||(Line>Text.size()))
	cout << "Erro! Linha não encontrada.\n";
	else
	{
		string NewLine;
		cout << "Digite o novo conteúdo da linha " << Line << ".\n";
		cin >> NewLine;
		Text[Line]=NewLine;
	}
}

