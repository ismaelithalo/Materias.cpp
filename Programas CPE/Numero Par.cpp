#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout << "Insira um numero" << endl;
	cin >> a;
	
	if (a% 2 == 0)
	cout << a << "eh um numero par" << endl;
	else
	cout << a << "nao eh um numero par" << endl;
	
	return 0;
}
