// Ismael Ithalo 20/03
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
		cout << "Digite um numero inteiro\n";
		cin >> a;
		cout << "Digite mais um numero inteiro\n";
		cin >> b;
		cout << "Digite um terceiro numero inteiro\n";
		cin >> c;{
			
	if ((a>b) || (a>c))
		cout << "A " << a << " eh maior que pelo menos um dos numeros\n";
	if ((a<b) || (b>c))
		cout << "B " << b << " eh maior que pelo menos um dos numeros\n";
	if ((a<c) || (b<c))
		cout << "C " << c << " eh maior que pelo menos um dos numeros\n";
		
		
	}
	
		system("pause");
	return 0;
	
}
