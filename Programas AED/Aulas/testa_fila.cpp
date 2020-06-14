#include "genQueue.h"
#include "genListStack.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

  string palavra;
  Queue<string> f;
  LLStack<string> p;

  while (cin >> palavra) {
    f.enqueue(palavra);
    p.push(palavra);
  }

  while (!f.isEmpty()) {
    cout << f.dequeue() << " ";
  }
  cout << endl;
  cout << endl;
  while (!p.isEmpty()) {
    cout << p.pop() << " ";
  }
  cout << endl;

  return 0;
}
