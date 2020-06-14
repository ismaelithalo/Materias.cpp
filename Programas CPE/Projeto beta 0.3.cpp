#include <iostream>
#include <windows.h>
#include <locale.h>
#include <conio.h>


typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;
static int __BACKGROUND = 1;
static int __FOREGROUND = LIGHTGRAY;	

using namespace std;
void tela_desenho (string art) {
std::cout << art << endl;
}
void narra (string texto, int speed) {
int i=0;
while (i<texto.length())
{
cout << texto[i];
Sleep (speed*30);
Beep (1000,30*speed);
i++;
}
cout << endl;	
}
void cores (int letras, int fundo ){
__FOREGROUND = letras;
    __BACKGROUND = fundo;
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    letras + (__BACKGROUND << 4));
}
void tela_inicial (int vel) {
cout << R"( /$$                           /$$                  /$$$$ )" << endl; Sleep(vel);
cout << R"(| $$                          | $$                 /$$  $$)" << endl; Sleep(vel);
cout << R"(| $$       /$$   /$$  /$$$$$$$| $$   /$$ /$$   /$$|__/\ $$)" << endl; Sleep(vel);
cout << R"(| $$      | $$  | $$ /$$_____/| $$  /$$/| $$  | $$    /$$/)" << endl; Sleep(vel);
cout << R"(| $$      | $$  | $$| $$      | $$$$$$/ | $$  | $$   /$$/ )" << endl; Sleep(vel);
cout << R"(| $$      | $$  | $$| $$      | $$_  $$ | $$  | $$  |__/  )" << endl; Sleep(vel);
cout << R"(| $$$$$$$$|  $$$$$$/|  $$$$$$$| $$ \  $$|  $$$$$$$   /$$  )" << endl; Sleep(vel);
cout << R"(|________/ \______/  \_______/|__/  \__/ \____  $$  |__/  )" << endl; Sleep(vel);
cout << R"(                                         /$$  | $$        )" << endl; Sleep(vel);
cout << R"(                                        |  $$$$$$/        )" << endl; Sleep(vel);
cout << R"(                                         \______/         )" << endl << endl; Sleep(vel);
}


int main()
{
setlocale(LC_ALL, "Portuguese");
bool jogando;


cores (YELLOW, BLACK);
    tela_inicial(100);
        cores (WHITE, BLACK);
        narra("         Voc� j� achou uma moeda da sorte?",1);
        cout << "            1 - Sim           2 - N�o" << endl << endl;
        
    while (true){
    	  
switch (getch()){
case 49: {
jogando=true;
 
 	narra ("Bom, muito bom. Mas voc� j� chegou a pensar na hist�ria dela?",1);       
	cout << "            1 - Sim           2 - N�o" << endl << endl;
	while (true){
		switch (getch()){
			case 49:{
				narra ("Certo, ent�o vamos l�.",1);
				narra ( "Seja bem vindo ao ... ",1); cores (YELLOW, BLACK);
				narra ( "       LUCKY?" ,1);
				narra (" ",2);
				cores (WHITE, BLACK);
				break;
			}
			case 50: {
				narra ( "Ent�o veio ao programa certo. Ele foi feito para mostrar isso a voc�.",1);
				narra ( "Seja bem vindo ao ... ",1); cores (YELLOW, BLACK);
				narra ( "LUCKY?" ,1);
				narra (" ",2);
				cores (WHITE, BLACK);	
				break;
			}
			default: {
				narra( "Acho que essa n�o � uma resposta v�lida ... ",1);
				break;
				}
			}
		break;
	}
	break;
}
		
case 50: {
jogando=false;
narra ("Ent�o essa aventura n�o � para voc�. Mas procura por uma, � legal.",1);
narra ("Quem sabe que hist�rias ela guarda... Volta quando achar uma, t�?", 1);
return 0;
break;
}
default: {
narra( "Acho que essa n�o � uma resposta esperada ... ",1);
break;
		}
	}
 if (jogando==true){
 	break;
 }
}
        system ("cls");
        
        tela_desenho (R"(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&.&& &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&*&*.#(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&& &.,,....,&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&& .#.,,.../#/&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&,/.,&..*..&.&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&.**&%,...(& &(&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&%&&.,(.%.*.&.&.&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&.&.*..&,&/.&,&& &&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&& &**..##,*(#&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*&,&*(*(##&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&,##/,,&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&(((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%(((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%((((((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&(((((((((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((((((((((((((((((((((((((((((
&&&&&&&&&&&&&&&&&&&&&&&&&&&&(((((((((((((((((((((((((((((((
)");
        
        
    
     return 0;
}
