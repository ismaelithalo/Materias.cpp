#ifndef GUARD_curva
#define GUARD_curva
#include "ponto.hpp"
#include <vector>

class Curva {
	private:
		std::vector<Ponto> listaPontos;

	public:
		//construtor inicia lista vazia
		Curva();

		void addPonto(Ponto);

	 	double calculaComprimento();
};
#endif
