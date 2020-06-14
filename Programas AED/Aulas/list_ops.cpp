#include "list2.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  linkedList lista;
  int valor;

  while(cin >> valor)
  {
    lista.addHead(valor);
  }

  cout << "Maximo: " << lista.max() << endl;

  cout << "Media: " << lista.avg() << endl;

  return 0;
}
