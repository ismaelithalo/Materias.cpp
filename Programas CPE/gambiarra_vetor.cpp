#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	
	string texto;
	srand(time(0));
	int random; // int que ser� aleat�rio
	int numerofor1=15; // quantidade de itens do vetor
	int numerofor2=5; // quantidade de itens a serem buscados por vez
	int z=0; // numero isolado dos la�os para mostrar o que h� no vetor auxiliar
	
	vector<string> caracter;
	vector<string> auxiliar;
	vector<int> resultados; // gambiarra mestre
	resultados.push_back(30); // Numero aleat�rio diferente do intervalo busca para for�ar a primeira entrada
	

	for (int n=0; n<numerofor1; n++){
		getline (cin, texto);
		caracter.push_back(texto);
	}
	cout << endl;
	

		for (int i=0; i<3; i++){	
			for (int j=0; j<numerofor2; j++){
				random=rand()%numerofor1;
				for (int c=0; c<resultados.size(); c++){
					if (random==resultados[c]){
					random=rand()%numerofor1;
					c=0;
					}
				}
	// Se o aleat�rio n�o foi usado, ele vai ser usado agora ent�o � guardado no vetor resultados
				resultados.push_back(random);
	// Aqui � pego uma string aleat�ria do vetor original e � jogada no auxiliar
				auxiliar.push_back(caracter[random]);
	// Aqui � mostrado esse string aleat�rio
				cout << auxiliar[z] << endl; z++;
			}
			cout << auxiliar.size() << endl;
		}	
	
	return 0;
}
