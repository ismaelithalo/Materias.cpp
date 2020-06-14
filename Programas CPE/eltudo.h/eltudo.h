using namespace std;

long long unsigned int fatorial(int numero){
   if(numero > 1)
      return numero * fatorial(numero - 1);
   else
      return 1;
}

string dec_binario (int dec){
		string keep,binario;
	int cont1,cont2=0;
	char aux;

for (; dec>=1;){	
if (dec%2==0)
{
aux='0';}
if (dec%2==1)
{
aux='1';}
dec=dec/2;
keep=keep+aux;
cont1++;
}

binario=keep;

while (cont1>0){
	binario[cont2]=keep[cont1-1];
	cont2++; cont1--;
}
	return binario;
}

