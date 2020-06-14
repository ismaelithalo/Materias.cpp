#include <string>
#include <iostream>

using namespace std;

//declaracao de uma classe
class Arvore{
  private:
    string nomeCientifico;
    string nome;

  public:
    //construtor
    /* este ="" significa que, se chamarem o construtor sem argumentos,
    os parametros vao receber o valor a direita, neste caso, "" (string vazia)*/
    Arvore(const char* n1 = "", const char* n2 = "")
    {
      nome = n1;
      nomeCientifico = n2;
    }

    //funcao-membro (metodo)
    void meu_nome(int tipo)
    {
      if(tipo == 0)
        cout << "Meu nome cientifico e: " << nomeCientifico << endl;
      else
        if(tipo == 1)
          cout << "Meu nome e: " << nome << endl;
        else
          cout << "erro!" << endl;
    }

};

//funcao principal do programa
int main(int argc, char const *argv[]) {

  //instanciando os objetos
  Arvore arv("Jacaranda", "Jacaranda acutifolia");
  Arvore arv2("Araucaria", "Araucaria angustifolia");
  Arvore arv3; //declara variavel sem argumentos - invoca construtor padrao

  //chamadas da funcao-membro dos objetos
  arv.meu_nome(0);
  arv2.meu_nome(1);
  arv3.meu_nome(0);

  return 0;
}