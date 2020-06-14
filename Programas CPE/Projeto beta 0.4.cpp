#include <iostream>
#include <windows.h>
#include <locale.h>
#include <conio.h>


typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;
static int __BACKGROUND = 1;
static int __FOREGROUND = LIGHTGRAY;
	
HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
void fontsize(int,int);
  
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
void narrapo (string texto, float speed) {
	
int i=0;
while (i<texto.length())
{
cout << texto[i];
Sleep (speed*30);
Beep (1300,30*speed);
i++;
}
cout << endl;
	
}
void cometa_gif (int speed,int cor_planeta) {
	
	Sleep (speed);
	cores (BLUE, BLACK);
cout << R"(

`                              
````````                       
 :++/-.`                      
 ooo/.`                    
 +?+/o-````                
 ??//o:``.+`              
   ?+:/o+.-?/.             
    .??+:-/+?+o?oo/-          
    ..:?o/-://o??o/+o?+-       
   ``.-..-o?/--:-:///-.-/o?:`    
     :/o?+o?+:.``..`````.-+?.   
       -o?o?o/.`  ```.---:/?`  
      ```/?o/:.`.```..--:++o/  
        ``-?o:.`-...---:/+oo+  
           `+?/`--:::::/o?+o.  
             `/o///+++oo??o-   
                `:/+o??o+:     
                               
                                        )"
											 << endl;
cores (cor_planeta, BLACK);											 
cout << R"(

                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;

Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(


````                                
  ````````````                       
   ```.:++/-.`                      
      ``.+ooo/.`                    
      ` ``+?+/o-````                
       ```:??//o:``.+`              
  ````   `:??+:/o+.-?/.             
     ````:.??+:-/+?+o?oo/-          
    ``   ..:?o/-://o??o/+o?+-       
  ``````.-..-o?/--:-:///-.-/o?:`    
      `.-:/o?+o?+:.``..`````.-+?.   
            -o?o?o/.`  ```.---:/?`  
           ```/?o/:.`.```..--:++o/  
             ``-?o:.`-...---:/+oo+  
                `+?/`--:::::/o?+o.  
                  `/o///+++oo??o-   
                     `:/+o??o+:     
)"
											 << endl;
											 
cores (cor_planeta, BLACK);											 
cout << R"(

                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;
Sleep (speed);
system ("cls");
cores (BLUE, BLACK);											 
cout << R"(



                                           
   ``````                                
      ````````````                       
        ```.:++/-.`                      
           ``.+ooo/.`                    
           ` ``+?+/o-````                
            ```:??//o:``.+`              
       ````   `:??+:/o+.-?/.             
  `       ````:.??+:-/+?+o?oo/-          
  ```    ``   ..:?o/-://o??o/+o?+-       
       ``````.-..-o?/--:-:///-.-/o?:`    
           `.-:/o?+o?+:.``..`````.-+?.   
                 -o?o?o/.`  ```.---:/?`  
                ```/?o/:.`.```..--:++o/  
                  ``-?o:.`-...---:/+oo+  
                     `+?/`--:::::/o?+o.  
                       `/o///+++oo??o-   
                          `:/+o??o+:     
)"
											 << endl;
cores (cor_planeta, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;
Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(
  

                                               
       ``````                                
          ````````````                       
            ```.:++/-.`                      
               ``.+ooo/.`                    
               ` ``+?+/o-````                
                ```:??//o:``.+`              
           ````   `:??+:/o+.-?/.             
      `       ````:.??+:-/+?+o?oo/-          
      ```    ``   ..:?o/-://o??o/+o?+-       
           ``````.-..-o?/--:-:///-.-/o?:`    
               `.-:/o?+o?+:.``..`````.-+?.   
                     -o?o?o/.`  ```.---:/?`  
                    ```/?o/:.`.```..--:++o/  
                      ``-?o:.`-...---:/+oo+  
                         `+?/`--:::::/o?+o.  
                           `/o///+++oo??o-   
                              `:/+o??o+:     
)" 
											;
 cores (cor_planeta, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;

Sleep (speed);
system ("cls");
cores (BLUE, BLACK);
cout << R"(
	  
	
	
	                                               
	       ``````                                
	          ````````````                       
	            ```.:++/-.`                      
	               ``.+ooo/.`                    
	               ` ``+?+/o-````                
	                ```:??//o:``.+`              
	           ````   `:??+:/o+.-?/.             
	      `       ````:.??+:-/+?+o?oo/-          
	      ```    ``   ..:?o/-://o??o/+o?+-       
	           ``````.-..-o?/--:-:///-.-/o?:`    
	               `.-:/o?+o?+:.``..`````.-+?.   
	                     -o?o?o/.`  ```.---:/?`  
	                    ```/?o/:.`.```..--:++o/  
	                      ``-?o:.`-...---:/+oo+  
	                         `+?/`--:::::/o?+o.  
	                           `/o///+++oo??o-   
	                              `:/+o??o+:     
)" 
											;
 cores (cor_planeta, BLACK);											 
cout << R"(
                                                   ((((((((
                                              (((((((((((((
                                         ((((((((((((((((((
                                        (((((((((((((((((((
                                     ((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                                 ((((((((((((((((((((((((((
                               ((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((
                             ((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((()
)"
<< endl;

Sleep (170);
system ("cls");

system ("color 7");
system ("color f7"); 
 
system ("color 4");
system ("color f4");

cout << endl;
}
void fullscreen_title (int tam1, string title, int vel, int tam2){
	
		Sleep (2000);
        system ("cls");
        fontsize (tam1,tam1);
        cout << endl << endl << endl << endl << endl << endl;
		narra (title,vel);
		Sleep (2300);
		system ("cls");
		fontsize(tam2,tam2); 	
}

int main()
{
setlocale(LC_ALL, "Portuguese");
bool jogando;
float velpo = 1.7;
int velt = 1;

cores (YELLOW, BLACK);
    tela_inicial(100);
        cores (WHITE, BLACK);
        narra("         Voc� j� achou uma moeda da sorte?",velt);
        cout << "            1 - Sim           2 - N�o" << endl << endl;
        
    while (true){
    	  
switch (getch()){
case 49: {
jogando=true;
 
 	narra ("Bom, muito bom. Mas voc� j� chegou a pensar na hist�ria dela?",velt);       
	cout << "            1 - Sim           2 - N�o" << endl << endl;
	while (true){
		switch (getch()){
			case 49:{
				narra ("Certo, ent�o vamos l�.",velt);
				narra ( "Seja bem vindo ao ... ",velt); cores (YELLOW, BLACK); Sleep (800);
				narra ( "LUCKY?" ,velt);
				cores (WHITE, BLACK);
				jogando=true;
				break;
			}
			case 50: {
				narra ( "Ent�o veio ao programa certo. Ele foi feito para mostrar isso a voc�.",velt);
				narra ( "Seja bem vindo ao ... ",velt); cores (YELLOW, BLACK); Sleep (800);
				narra ( "LUCKY?" ,velt);
				cores (WHITE, BLACK);
				jogando=true;	
				break;
			}
			default: {
				narra( "Acho que essa n�o � uma resposta v�lida ... ",velt);
				jogando=false;
				break;
				}
			}
		if (jogando==true){
			break;
		}
	}
	break;
}
		
case 50: {
jogando=false;
narra ("Ent�o essa aventura n�o � para voc�. Mas procura por uma, � legal.",velt);
narra ("Quem sabe que hist�rias ela guarda... Volta quando achar uma, t�?", velt);
return 0;
break;
}
default: {
narra( "Acho que essa n�o � uma resposta esperada ... ",velt);
break;
		}
	}
 if (jogando==true){
 	break;
 }
}

		fullscreen_title(36,"Cap�tulo 01: A epop�ia do cometa",2,16);		
		cores (BLUE, BLACK);
			
		tela_desenho (R"(                                               
                                ``````       
                       ````````````          
                      `.-/++:.```            
                    `./ooo+.``               
                ````-o/+s+`` `               
              `+.``:o//ss:```                
             ./s-.+o/:+ss:`   ````           
          -/ooso+s+/-:+ss.:````       `      
       -+so+/osso//:-/os:..   ``    ```      
    `:so/-.-///:-:--/so-..-.``````           
   .s+-.`````..``.:+so+so/:-.`               
  `s/:---.```  `./ososo-                     
  /o++:--..```.`.:/os/```                    
  +oo+/:---...-`.:os-``                      
  .o+so/:::::--`/s+`                         
   -ossoo+++///o/`                           
     :+osso+/:`                              
                                             )");
	
	cores (BLACK, WHITE);
	narrapo ("A esmo pelo cosmo, pelas vias espaciais", velpo); 
	narrapo ("Vagava pequena rocha com um rastro, um cometa", velpo);
	narrapo ("Feita de gelo, g�s, n�quel, ferro e mais metais", velpo);
	narrapo ("Colidiu com n�o t�o astro em seu caminho, um planeta", velpo);
	cout << endl;
	
	Sleep (500);
	system ("cls");
	system ("color 0f");

	cores (WHITE, BLACK);
	narra ("Com que planeta o cometa colidiiu?",velt);
	cout << "1 - Merc�rio     2 - V�nus    3 - Terra" << endl << endl; 
	
	while (true){
		switch(getch()){
			case 49: {
				system ("cls");
				cometa_gif (400,RED);
				system ("cls");
				system ("color 7f");
				cores (BLACK, WHITE);
				narrapo ("N�o raro que se assustasse, algo novo aconteceu",velpo);
				narrapo ("Tendo perdido o rastro n�o sabia mais quem era", velpo);
				narrapo ("Situa��o peculiar essa que a rocha se meteu", velpo);
				narrapo ("Merc�rio a derrete e sua aventura se encerra.", velpo);
				Sleep (1400);
				system ("cls");
				system ("color 0");
				system ("color 0f");
				narra ("Fim da rota de merc�rio.",velt);
				Sleep (500);
				return 0;
			}
			case 50: {
				jogando=true;
				system ("cls");
				cometa_gif (400, YELLOW);
				system ("cls");
				system ("color 7f");
				cores (BLACK, WHITE);
				narrapo ("N�o raro que se assustasse, algo novo aconteceu",velpo);
				narrapo ("Tendo perdido o rastro n�o sabia mais quem era", velpo);
				narrapo ("Situa��o peculiar essa que a rocha se meteu", velpo);
				narrapo ("Foi engolido por V�nus, sumiu em sua atmosfera.", velpo);
				fullscreen_title(36,"Cap�tulo 02: O tempo e o espa�o",2,16);
				system ("color 0f");
				cores (BLACK, WHITE);
				narrapo ("Mas n�o h� perdido tudo, pois encontrara uma miss�o", velpo);
				narrapo ("N�o bastasse seu destino, desafiou-o com o que tinha", velpo);
				narrapo ("Logo nem que passassem de cem anos a um milh�o", velpo);
				narrapo ("A rocha havia de regressar a seu lar algum dia", velpo);
				Sleep (1000);  system ("cls");
				break;
			}
			default: {
				narra( "Acho que essa n�o � uma resposta v�lida ... ",velt);
				jogando=false;
				break;
				}
			}
		if (jogando==true){
 			break;}
	}
    system ("color 0f");     
    cores (WHITE, BLACK);
	narra ("Quanto tempo se passou?",velt);
	cout << "1 - 100 anos     2 - 1000 anos   3 - 1 milh�o de anos" << endl << endl;
	
	while (true){
		switch (getch()){
			case 49: {
				jogando=true;
				fullscreen_title(36,"100 anos depois ...",2,16);
				cores (BLACK, WHITE);
				narrapo ("N�o h� nada mais mon�tono que a companhia do nada", velpo);
				narrapo ("Passar todos esses anos im�vel � para poucos", velpo);
				narrapo ("Contudo vem o inesperado e renova sua jornada", velpo);
				
				break;
			}
		}
		if (jogando==true){
 			break;}
	}
		cout << "Fim" << endl;
     return 0;
}

void fontsize(int a, int b){  
  PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();  
  lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);  
  GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
  lpConsoleCurrentFontEx->dwFontSize.X = a;  
  lpConsoleCurrentFontEx->dwFontSize.Y = b;  
  SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
 }
