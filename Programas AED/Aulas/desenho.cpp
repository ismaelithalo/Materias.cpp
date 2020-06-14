#include "curva.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{
		Curva c;
		double x,y;
		string s;

		cout 	<< "Digite coordenadas x e y dos pontos entre espaços"
					<< ", a cada linha, CTRL-D para sair:" << endl;

		//leitura dos pontos
		while(cin >> x >> y){
			Ponto p(x,y);
			c.addPonto(p);//adiciona ponto
			// c.addPonto(Ponto(x,y));//adiciona ponto
		}

		cout << "Comprimento da curva: " << c.calculaComprimento() << endl;
}
