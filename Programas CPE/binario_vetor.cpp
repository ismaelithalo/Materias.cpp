#include <iostream>
#include <vector>
using namespace std;
int main() {

vector <int> binario;
vector<int> keep;
vector <int>:: iterator pos;
int dec,aux;
cin >> dec;

for (int i=0; dec>=1;i++)
{
aux=dec%2; dec=dec/2;
cout << aux;
keep.push_back(aux);
}

for (pos=keep.end(); binario.size()!=keep.size(); pos--){
binario.push_back(*pos);
}

cout << endl << binario.size();

return 0;
}
