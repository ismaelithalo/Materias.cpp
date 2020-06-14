#include <iostream>
#include <vector>
using namespace std;

struct Pessoa {
	string nome;
	int idade;
	int cpf;
};


int main (){

vector <Pessoa> clientes;

Pessoa cliente;
string nome;
cin >> nome;
cliente.nome = nome;
int idade; cin >> idade;
idade = cliente.idade;

clientes.push_back(cliente);

string teste;
teste = clientes[0].nome;

cout << clientes[0].nome << endl;

	
	return 0;
}
