#include "curva.hpp"
#include <vector>
#include <cmath>

using namespace std;

	//construtor padrao inicia lista vazia
	Curva::Curva() : listaPontos(){
		//listaPontos = vector<Ponto>();//alternativa
	}

	void Curva::addPonto(Ponto p){
		listaPontos.push_back(p);
	}

	double Curva::calculaComprimento(){
		double comp = 0;
		double dx, dy, dist;
		for(vector<Ponto>::size_type i = 1; i<listaPontos.size(); i++){
			dx = listaPontos[i].x - listaPontos[i-1].x;
			dy = listaPontos[i].y - listaPontos[i-1].y;
			dist = sqrt(dx*dx + dy*dy);
			comp = comp + dist;
		}
		return comp;
	}
