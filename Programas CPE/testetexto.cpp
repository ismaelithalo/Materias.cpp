#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	
	string texto;
	srand(time(0));
	int random; // int que será aleatório
	int numerofor1=15; // quantidade de itens do vetor
	int numerofor2=5; // quantidade de itens a serem buscados por vez
	int z=0; // numero isolado dos laços para mostrar o que há no vetor auxiliar
	
	vector<string> caracter;
	vector<string> auxiliar;
	vector<int> resultados; // gambiarra mestre
	resultados.push_back(30); // Numero aleatório diferente do intervalo busca para forçar a primeira entrada
	
	// Linha não necessária, isso simula o arquivo preenchido
	for (int n=0; n<numerofor1; n++){
		getline (cin, texto);
		caracter.push_back(texto);
	}
	cout << endl;
	
	/* Nesse primeiro for o limite vai ser quantas vezes você vai rodar o a busca, por exemplo se são 15 nomes e a busca é de 5 em 5,
	você vai rodar a busca 3 vezes */
	
		for (int i=0; i<3; i++){
			
	// Nesse segundo for o limite vai ser a quantidade que voce quer pegar por vez
	
			for (int j=0; j<numerofor2; j++){
				random=rand()%numerofor1;
	// Esse for verifica se o numero aleatório já foi usado, se sim ele pega outro	
				for (int c=0; c<resultados.size(); c++){
					if (random==resultados[c]){
					random=rand()%numerofor1;
					c=0;
					}
				}
	// Se o aleatório não foi usado, ele vai ser usado agora então é guardado no vetor resultados
				resultados.push_back(random);
	// Aqui é pego uma string aleatória do vetor original e é jogada no auxiliar
				auxiliar.push_back(caracter[random]);
	// Aqui é mostrado esse string aleatório
				cout << auxiliar[z] << endl; z++;
			}
			cout << auxiliar.size() << endl;
		}	
	
	return 0;
}
