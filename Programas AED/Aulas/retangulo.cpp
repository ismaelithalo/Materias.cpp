#include <iostream>

using namespace std;

class retangulo{
private:
  double lado;
  double altura;

public:
  //CONSTRUTORES
  retangulo(){
    lado = 0.0;
    altura = 0.0;
  }

  retangulo(double lado, double altura){
    this->lado = lado;
    this->altura = altura;
  }

  //GETTERS/SETTERS
  double getLado(){
    return lado;
  }

  double getAltura(){
    return altura;
  }

  void setLado(double lado){
    this->lado = lado;
  }

  void setAltura(double altura){
    this->altura = altura;
  }

  //CALCULO DA AREA DO retangulo
  double area(){
    return lado * altura;
  }
};



class paralelepipedo: public retangulo{
private:
  double profundidade;
public:
  //CONSTRUTOR
  paralelepipedo(double lado, double altura, double profundidade):retangulo(lado,altura){
    this->profundidade = profundidade;
  }

  //GETTER/SETTER
  double getProfundidade(){
    return profundidade;
  }

  void setProfundidade(double profundidade){
    this->profundidade = profundidade;
  }

  //repare que volume() invoca o metodo area() do objeto, herdado da classe retangulo
  double volume(){
    return profundidade * area();
  }
};



int main(){
  double x, y, z;
  cout << "Digite lado, altura e profundidade: ";
  cin >> x >> y >> z; //equivalente a cin >> x; cin >> y; cin >> z;

  retangulo ret(x,y);
  paralelepipedo pep(x,y,z);

  cout << "Area: " << ret.area() << endl;

  cout << "Volume: " << pep.volume() << endl;

}
