#include "genListStack.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

  string s1, s2;
  LLStack<int> op1, op2, result;
  char c;

  std::cout << "Digite os dois números para somar, separados por espaço e enter ao final:"
            << std::endl;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++) {
    c = s1[i];
    op1.push((int)(c-'0'));
  }
  for (int i = 0; i < s2.size(); i++) {
    c = s2[i];
    op2.push((int)(c-'0'));
  }

  //IMPLEMENTE AQUI O ALGORITMO DA SOMA


  return 0;
}
