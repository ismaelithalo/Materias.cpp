#include <iostream>
#include <windows.h>
#include <locale.h>
#include <conio.h>
//#include <thread>

typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;
static int __BACKGROUND = 1;
static int __FOREGROUND = LIGHTGRAY;
	
HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
void fontsize(int,int);
  
using namespace std;
void tela_desenho (string art) {
std::cout << art << endl;
}
void narra (string texto, float speed) {
	
int i=0;
while (i<texto.length())
{
cout << texto[i];
Sleep (speed*30);
Beep (3000,30*speed);
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
void tela_2 (){

cout << R"( /$$                           /$$                  /$$$$ )" << endl;
cout << R"(| $$                          | $$                 /$$  $$)" << endl;
cout << R"(| $$       /$$   /$$  /$$$$$$$| $$   /$$ /$$   /$$|__/\ $$)" << endl;
cout << R"(| $$      | $$  | $$ /$$_____/| $$  /$$/| $$  | $$    /$$/)" << endl;
cout << R"(| $$      | $$  | $$| $$      | $$$$$$/ | $$  | $$   /$$/ )" << endl;
cout << R"(| $$      | $$  | $$| $$      | $$_  $$ | $$  | $$  |__/  )" << endl;
cout << R"(| $$$$$$$$|  $$$$$$/|  $$$$$$$| $$ \  $$|  $$$$$$$   /$$  )" << endl;
cout << R"(|________/ \______/  \_______/|__/  \__/ \____  $$  |__/  )" << endl;
cout << R"(                                         /$$  | $$        )" << endl;
cout << R"(                                        |  $$$$$$/        )" << endl;
cout << R"(                                         \______/         )" << endl << endl;
	
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
void glitch (){
	system ("cls");
	system ("color 7");
	system ("color f7"); 
	system ("color 4");
	system ("color f4");
	system ("color 0f");
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
glitch();

cout << endl;
}
void fullscreen_title (int tam1, string title, int vel, int tam2){
	
		Sleep (1000);
        system ("cls");
        fontsize (tam1,tam1);
        cout << endl << endl << endl << endl << endl << endl;
		narra (title,vel);
		Sleep (2300);
		system ("cls");
		fontsize(tam2,tam2); 	
}
void planeta (int cor) {
cores (cor,BLACK);
 cout << R"(
                                              
                     ```                     
              -/+oyssssssso+/:.              
          `:+ooyyyyssssyyyyyyyys/.           
        .+ssooossssyyssssssssyyyyss:         
      `/ssssssso++++osyyyyyyyyhhhyysy:       
     .sossoooooo++ooossssyyyyyhhyyhyhho      
    -yysssoooooooossoosssyyyyyyyhhhyyhhs`    
   `yyyyo+oooooooosssyyyyyyyyyhhyyyyyhhh+    
   +yyyyo+++oossssssyyyyyyyyyyhyyyyyyhhhh.   
   shyyyyssooooosssssyyyyyyyyyssssssyhhhh/   
   yyyyyyyyyysoooosssyysssyyyssssyyyhyhhh+   
   syyyyyyyyyyysssssssyyyyyyssyyyyyhhhhhd/   
   /yyyyhhhhhyyhhhyyyyyyyyyyyyssyyhhhhhhh.   
   `ssyhhhyyhhyyhyyyyyyyysssssyhhhhhhhhh+`   
    .yyhhyyyyhysssyyyyyyyyyyyyhhddhhhhho`    
     `yhhhhhhyyyyyyyyyysssyyhhhddhhdhh+`     
       /hhhhhyyyhhhhhhhhhhhhhhhhhhddy:`      
        `+hhhhhhhhhhhhhhhhhhhhhhhhs/`        
           -oyhdddddhhhhhhhhhhhy+-`          
              .:+syyhhhhyyso+:.`             
                    ``````                   )" << endl << endl << endl;
}
void musica (){
	
	    int n = 150;
        int time = 350;
        
        int C1 = 33;
        int A1 = 55.00;
        int F2 = 87.31;
        int B3	= 247;
        int D4	= 293.66;
        int Ds4 = 311.13;
        int E4	= 330;
        int F4	= 349.23;
        int Fs4  = 370;
        int G4	= 392.00;
        int A4	= 440.00;
        int B4	= 494;
        int D5	= 587.33;
        int Fs5  = 740;
        int G5	= 784;
        int A5	= 880.00;
        int B5	= 987.77;

	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,3*n);
	Beep (D4, 5*n);
					
	Beep (F2, 2*n); 
	Beep (F2, 2*n);
	Beep (F2, n);
	Beep (F2, 2*n);
	
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,2*n);
	Beep (A4, 3*n);
	Beep (G4, n);
	Beep (Fs4, n);
	Beep (Ds4, 3*n);
	
	Sleep(2*time); Beep (F2, 2*n);
	Beep (F2, 2*n);
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,3*n);
	Beep (D4, 5*n);
					
	Beep (F2, 2*n); 
	Beep (F2, 2*n);
	Beep (F2, n);
	Beep (F2, 2*n);	
	
	Beep (B3, 3*n);
	Beep (D4, n);
	Beep (G4, 3*n);
	Beep (Fs4,2*n);
	Beep (A4, 3*n);
	Beep (G4, n);
	Beep (Fs4, n);
	Beep (Ds4, 3*n);
	
}
void ampulheta (){
		cout << R"(
               /syhhhddddhhhhys/              
              oyossyyyhNNmmmdNo              
               d`           `m               
               +o `+/:::/+` o+               
                /s-:+smNd/-s+                
                 `+s:-/-:s+`                 
                   `d. .d`                   
                 -oo.   .oo-                 
               `so`  -+-  `os`               
               s/  /+sdNd/  /s               
               m`-yomNNNNNd-`m               
              hNdosssssssssohNh              
              -/+oosssssssso+/-              )" << endl << endl << endl;
}
void comet (){
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
}

float velpo = 0;
float velt = 0;

int main()
{
setlocale(LC_ALL, "Portuguese");
cores (YELLOW, BLACK);
//thread musica
//inicial com anima��o
bool jogando;
/*
thread t1 (tela_inicial,100);
thread t2 (musica);
t1.join();
t2.join(); */

    tela_inicial(100);
    system ("cls");
    
    while (true){
    cores(YELLOW, BLACK); tela_2();
    cores(WHITE, BLACK);
	cout << "           Pressione ENTER para INICIAR" << endl;
    cout << endl << "               2 - Configura��es" << endl;
    cout << "               3 - Sobre" << endl;
    cout << "               4 - Sair" << endl << endl;
	
    switch (getch()){
    	case 13:{
    		jogando = true;
			break;
		}
		case 50: {
			jogando = false;
			cout << "Velocidade do texto comunm: " << velt << endl;
			cout << "Velocidade do texto de hist�ria: " << velpo << endl;
			cout << endl << "    1 - Editar" << endl;
			cout << "    2 - Voltar" << endl;
				switch(getch()){
					case 49:{
						cout << endl << "Digite a velocidade do texto comum: ";
						cin >> velt;
						cout << "Digite a velocidade do texto de hist�ria: ";
						cin >> velpo; cout << endl;
						narra ("Altera��es conclu�das",velt);
						Sleep (200); system ("cls");
						break;
					}
					case 50:{
						system ("cls");
						break;
					}
				}
			break;
		}
		case 51: {
			jogando = false;
			cout << "Jogo feito por Ismael Ithalo" << endl;
			system ("cls");
			break;
		}
		case 52: {
			return 0;
		}
		default:{
			system ("cls");
			break;
		}
	}
		if (jogando==true){
			break;
		}
}
    	system ("cls");
    	cores(YELLOW, BLACK); tela_2();
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
		Sleep(1000);
		fullscreen_title(36,"Cap�tulo 01: A epop�ia do cometa",2,16);		
		cores (BLUE, BLACK);
	comet();
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
				system ("color 0f");
				planeta (RED);
				cores (BLACK, WHITE); Sleep (400);
				narrapo ("N�o raro que se assustasse, algo novo aconteceu",velpo);
				narrapo ("Tendo perdido o rastro n�o sabia mais quem era", velpo);
				narrapo ("Situa��o peculiar essa que a rocha se meteu", velpo);
				narrapo ("Merc�rio a derrete e sua aventura se encerra.", velpo);
				Sleep (1400);
				system ("cls");
				system ("color 0");
				system ("color 0f");
				cores (WHITE, RED);
				narra ("Fim da rota de merc�rio.",velt);
				Sleep (500);
				return 0;
			}
			case 50: {
				jogando=true;
				system ("cls");
				cometa_gif (400, YELLOW);
				system ("cls");
				system ("color 0f");
				planeta (YELLOW);
				cores (BLACK, WHITE); Sleep (400);
				narrapo ("N�o raro que se assustasse, algo novo aconteceu",velpo);
				narrapo ("Tendo perdido o rastro n�o sabia mais quem era", velpo);
				narrapo ("Situa��o peculiar essa que a rocha se meteu", velpo);
				narrapo ("Foi engolido por V�nus, sumiu em sua atmosfera.", velpo);
				Sleep(1000);
				fullscreen_title(36,"Cap�tulo 02: O tempo e o espa�o",2,16);
				cores (BROWN, WHITE);
				ampulheta();
              	cores (BLACK, WHITE); Sleep (400);
				narrapo ("Mas n�o h� perdido tudo, pois encontrara uma miss�o", velpo);
				narrapo ("N�o bastasse seu destino, desafiou-o com o que tinha", velpo);
				narrapo ("Logo nem que se passassem de cem anos a um milh�o", velpo);
				narrapo ("A rocha havia de regressar a seu lar algum dia", velpo);
				Sleep (1000);  system ("cls");
				break;
			}
			case 51:{
				cometa_gif (400,BLUE);
				goto terra;
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

while (true){
		
	system ("color 0f");     
    cores (WHITE, BLACK);
	narra ("Quanto tempo se passou?",velt);
	cout << "1 - 100 anos     2 - 1000 anos   3 - 1 milh�o de anos" << endl << endl;
	
		switch (getch()){
			case 49: {
				jogando=false;
				fullscreen_title(36,"100 anos depois ...",2,16);
				cores (BLACK, WHITE);
				
				
				narrapo ("N�o h� nada mais mon�tono que a companhia do nada", velpo);
				narrapo ("Esperando um grande sonho, conversando com o breu", velpo);
				narrapo ("Contudo vem o inesperado e renova sua jornada", velpo);
				narrapo ("Ao menos seria isso, mas nada aconteceu.", velpo);
				
				system ("cls");
				break;
			}
			case 50: {
				jogando=true;
				fullscreen_title(36,"1000 anos depois ...",2,16);
				cores (BLACK, WHITE);
				narrapo ("N�o h� nada mais mon�tono que a companhia do nada", velpo);
				narrapo ("Tantos anos im�vel ... Ningu�m mais o faria", velpo);
				narrapo ("Contudo vem o inesperado e renova sua jornada", velpo);
				narrapo ("Uma luz vinda do c�u, levou junto a calmaria.", velpo);				
				break;
		}
			case 51: {
				fullscreen_title(36,"1 milh�o de anos depois ...",2,16);
				cores (BLACK, WHITE);
				narrapo ("N�o h� nada mais mon�tono que a companhia do nada", velpo);
				narrapo ("N�o s�o muitos que entendem a solid�o de verdade", velpo);
				narrapo ("Contudo vem o inesperado e renova sua jornada", velpo);
				narrapo ("Pequena rocha enlouquece e se perde na eternidade.", velpo);
				return 0;
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
				system ("cls");
				cores (BLACK, WHITE);
				narrapo ("Junto � luz havia fogo, depois uma grande sonda", velpo);
				narrapo ("Procurando algo novo, n�o que a rocha se esconda", velpo);
				narrapo ("O nada enfim se encerra, quando a rocha � levada", velpo);
				narrapo ("E a tal sonda da Terra recome�a sua jornada.", velpo);
				system ("cls");

	while (true){
		
	system ("color 0f");     
    cores (WHITE, BLACK);
	narra ("A viajem foi segura?",velt);
	cout << "1 - Sim          2 - N�o" << endl << endl;
	
		switch (getch()){
			case 49: {
				fullscreen_title(36,"A viagem segue",2,16);
				cores (BLACK, WHITE);
				narrapo ("Um instante se passou V�nus ficou para tr�s", velpo);
				narrapo ("A rocha at� duvidou de sua pr�pria lucidez", velpo);
				narrapo ("Aquela luz vinda do c�u era rel�mpago fugaz", velpo);
				narrapo ("� sua vista estava Terra, a parada desta vez.", velpo);
				system ("cls");
				narrapo ("Nadando contra a correnteza, h� a improbabilidade", velpo);
				narrapo ("O regresso foi perfeito, sem nenhum inesperado", velpo);
				narrapo ("Contudo os donos da vil sonda, fundos em curiosidade", velpo);
				narrapo ("Estudam a pequena rocha, num laborat�rio fechado.", velpo);
				narrapo ("Tirando sua liberdade", velpo);
				cout << "Fim?" << endl;
				return 0;
			}
			case 50: {
				jogando=true;
				fullscreen_title(36,"A viagem segue",2,16);
				cores (BLACK, WHITE);
				narrapo ("Um instante se passou V�nus ficou para tr�s", velpo);
				narrapo ("A rocha at� duvidou de sua pr�pria lucidez", velpo);
				narrapo ("Aquela luz vinda do c�u era rel�mpago fugaz", velpo);
				narrapo ("� sua vista estava Terra, a parada desta vez.", velpo);
				glitch();
				cores (BLACK, WHITE);
				narrapo ("Espera, a luz n�o para, n�o era pra ser assim", velpo);
				narrapo ("N�o � a luz de um rel�mpago, � um rastro do fracasso", velpo);
				narrapo ("De um inc�ndio � explos�o, ser� desta vez o fim?", velpo);
				narrapo ("Ela j� estava na Terra, n�o tem fogo no espa�o.", velpo);
				narrapo ("Exagerado.", velpo);
				system ("cls");
				goto venus;
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
	// N�o esquece de colocar l� no case
	terra:
	fullscreen_title(36,"Cap�tulo 02: Um abrigo peculiar",2,16);
	
	while (true){
	venus:
	planeta(BLUE);
	 cores (BLACK, WHITE);
	narra ("Terra, planeta �gua, que ambiente aconchegante",velt);
	narra ("Comparado ao espa�o bem frio e sombrio",velt);
	narra ("Com exce��o de um detalhe, um vil rastro flamejante",velt);
	narra ("A rocha finalmente deixa aquele mundo vazio.",velt);
	  
    cores (WHITE, BLACK);
    system ("cls");
	narra ("Em que canto do planeta a rocha cai?",velt);
	cout << "1 - Terra firme   2 - Mar aberto" << endl << endl;
	
		switch (getch()){
			case 49: {
				jogando=true;
				system ("cls");
				cores (BLACK, WHITE);
				narrapo ("Cortando os c�us ao meio, o visitante chega a casa", velpo);
				narrapo ("J� fora rocha, cometa, e agora meteorito", velpo);
				narrapo ("Ele ruma um continente, e despenca o c�u em braza", velpo);
				narrapo ("Ser� que ao menos uma vez, ele ter� algum abrigo?", velpo);
				system ("cls");
					
					narra ("Em que regi�o?",velt);       
					cout << " 1 - Cidade     2 - Floresta " << endl << endl;
					
					while (true){
					switch (getch()){
					
					case 49: {
				system ("cls");		
				narrapo ("Por entre pr�dios e casas, vagam pessoas sem rumo", velpo);
				narrapo ("Finalmente algum sinal da dita civiliza��o", velpo);
				narrapo ("A ruas enchem de pessoas vislumbrando o c�u escuro", velpo);
				narrapo ("Pois se assustam com um ponto que expande em um clar�o.", velpo);
				system ("cls");
				narrapo ("T�o tenebroso esse acaso, t�o cruel esse destino", velpo);
				narrapo ("O meteorito desaba bem no centro da cidade", velpo);
				narrapo ("Os gritos ecoam longe, buscando amparo divino", velpo);
				narrapo ("N�o que isso pudesse reverter a realidade.", velpo);
 				system ("cls");
 				
 					narra ("Espera, voc� faz as escolhas, voc� � a divindade deles. ",velt);  
 					narra ("E ent�o, o clamor deles pode reverter a realidade? ",velt);
					cout << " 1 - Sim     2 - N�o " << endl << endl;
					
 
	while (true){
		switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("O clamor � ouvido, o milagre acontece", velpo);
				narrapo ("Por mais que ningu�m consiga acreditar", velpo);
				narrapo ("O p�nico moment�neo logo desaparece", velpo);
				narrapo ("Quando o meteorito desintegra em pleno ar.", velpo);
				Sleep (300); return 0;

			}
			case 50: {
				system ("cls");
				narrapo ("Como pequena era, a cidade foi dizimada", velpo);
				narrapo ("Sobra apenas vil cratera, nem sinal de algo vivo", velpo);
				narrapo ("Bem no centro h� uma rocha que com fogo foi cravada", velpo);
				narrapo ("E o mundo segue como se nada houvesse acontecido.", velpo);
				Sleep (300); return 0;	
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
	system ("cls");
				narrapo ("Dentre os verdes da floresta, um vermelho se destaca", velpo);
				narrapo ("Sob a fria e escura noite, perturbando a gentil paz", velpo);
				narrapo ("O meteoro caira bem no meio do nada", velpo);
				narrapo ("A Terra recebera o golpe, mas pra ela tanto faz.", velpo);
				system ("cls");
				narrapo ("Desgastara no ar e perdera sua pot�ncia", velpo);
				narrapo ("Caiu destruindo apenas o que havia em seu caminho", velpo);
				narrapo ("Sem nada ao redor, o fogo espalha com prud�ncia", velpo);
				narrapo ("Nem fauna e nem flora, sem problema ou decl�nio.", velpo);
 				system ("cls");
 				fullscreen_title(36,"100 anos depois ...",2,16);
 				 
 					narra ("Quem vaga por essa floresta?",velt);
					cout << "1 - Exploradores     2 - Nativos" << endl << endl;
					
	while (true){
		switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("Tanto tempo se passa, que a floresta j� cresceu", velpo);
				narrapo ("Mesmo onde havia nada, tudo coberto por vida", velpo);
				narrapo ("Em meio a isso exploradores entendem o que aconteceu", velpo);
				narrapo ("Procuravam alguma coisa que valesse sua ida.", velpo);
				
					system ("cls");
				narra ("Eles encontraram?",velt);
					cout << "1 - Sim     2 - N�o" << endl << endl;
					
				
				while (true){
		switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("Vagando sem rumo algum, por pura sorte ou destino", velpo);
				narrapo ("Exploradores d�o de cara em um momento sublime", velpo);
				narrapo ("Encontram o meteorito bem no meio do caminho", velpo);
				narrapo ("Um achado t�o incr�vel pra qualquer um que se aproxime.", velpo);
				system ("cls");
				narrapo ("Contudo n�o � t�o f�cil, talvez a sorte seja azar", velpo);
				narrapo ("O meteorito brilhante, emitiu luz por todo o tempo", velpo);
				narrapo ("Isso n�o � bom sinal, � algo bem peculiar", velpo);
				narrapo ("Uma pedra radioativa tomou conta do terreno.", velpo);

					system ("cls");
					narra ("O que eles fizeram?",velt);
					cout << "1 - Desistiram     2 - Insistiram" << endl << endl;
					

					while (true){
		switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("Vendo que n�o era seguro, foram ruma a sensatez", velpo);
				narrapo ("Deixaram a gl�ria de lado e retornaram para casa", velpo);
				narrapo ("Podem se preparar melhor e retornar uma outra vez", velpo);
				narrapo ("Mas essa hist�ria � outra, esse � fim dessa jornada.", velpo);
				Sleep (300); return 0;

			}
			case 50: {
				system ("cls");
				narrapo ("Cedendo � �nsia pela gl�ria, tomados pela gan�ncia", velpo);
				narrapo ("Rumaram o meteorito, chegavam cada vez mais perto", velpo);
				narrapo ("Anos em solo radioativo, modificaram as tais plantas", velpo);
				narrapo ("Que reagiram aos invasores, o desastre era certo", velpo);
				system ("cls");
				narrapo ("As vinhas os envolveram, folhas queimaram seu corpo", velpo);
				narrapo ("Um verdadeiro pesadelo, ignoraram o perigo", velpo);
				narrapo ("E como se n�o bastasse o sofrimento a eles posto", velpo);
				narrapo ("Por consequ�ncia de seus atos, foram devorados vivos.", velpo);
				Sleep (300); return 0;
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


			}
			case 50: {
				system ("cls");
				narrapo ("Pela vastid�o da selva, eles n�o encontram nada", velpo);
				narrapo ("Sabiam do meteorito, uma agulha no palheiro", velpo);
				narrapo ("Frustrados com seu resultado, eles encerram sua jornada", velpo);
				narrapo ("Quem sabe um outro momento � gasto outro dia inteiro.", velpo);
				Sleep (300); return 0;	
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

			}
			
			case 50: {
				system ("cls");
				narrapo ("Vivendo em meio a floresta, uma aldeia de nativos", velpo);
				narrapo ("Isolados de tudo e todos, tinham sua pr�pria cultura", velpo);
				narrapo ("Ca�ando a ceia na floresta, viram o meteorito", velpo);
				narrapo ("Uma pedra cintilante, mesmo ante a noite escura.", velpo);
				system ("cls");
				narrapo ("Cultuaram a tal pedra como um presente divino", velpo);
				narrapo ("Um brilho caracter�stico prendia sua aten��o", velpo);
				narrapo ("Fizeram oferendas, rituais e at� sacrif�cios", velpo);
				narrapo ("Mal sabiam eles que era uma maldi��o.", velpo);
				
				
					system ("cls");
					narra ("O que era a pedra?",velt);
					cout << "1 - Metal radioativo   2 - Pedra filosofal" << endl << endl;
					

	while (true){
		switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("A tal pedra cintilante era metal radioativo", velpo);
				narrapo ("Mas por incr�vel que pare�a, eles n�o foram afetados", velpo);
				narrapo ("Talvez a composi��o distinta dos organismos", velpo);
				narrapo ("Fez com que apenas as plantas tivessem corpos mudados.", velpo);
				
					system ("cls");
					narra ("Eles desistem da pedra?",velt);
					cout << "1 - Sim     2 - N�o" << endl << endl;
					
				
				while (true){
			switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("Ainda sim ficar t�o pr�ximo era uma problem�tica ", velpo);
				narrapo ("Radia��o causou enjoos, doen�as e tontura", velpo);
				narrapo ("Decidiram abandonar a tal pedra e vis pr�ticas", velpo);
				narrapo ("Tiveram grandes perdas, mas a vida continua.", velpo);
				Sleep (300); return 0;

			}
			case 50: {
				system ("cls");
				narrapo ("Sendo presente dos deuses, era errado abandona-lo", velpo);
				narrapo ("A natureza sua amiga, transformada era um perigo", velpo);
				narrapo ("As vinhas os envolveram, folhas queimaram seu corpo", velpo);
				narrapo ("Por consequ�ncia de seus atos, foram devorados vivos.", velpo);
				Sleep (300); return 0;

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

			}
			case 50: {
				system ("cls");
				narrapo ("Em meio aos seus rituais surgiu um grande inesperado", velpo);
				narrapo ("Em algum momento descobriram que a pedra tinha poderes", velpo);
				narrapo ("Por acidente, um punhado de terra derramado", velpo);
				narrapo ("Se tornou belos cristais, depois adere�os deles", velpo);
				system ("cls");
				narrapo ("O tempo foi passando, e mesmo o povo isolado ", velpo);
				narrapo ("Foi amaldi�oado pelo fruto da gan�ncia", velpo);
				narrapo ("Essa pedra desviou-os para o caminho errado", velpo);
				narrapo ("Destruiu sua uni�o, aumentou sua dist�ncia.", velpo);
				
					system ("cls");
					narra ("Deu muito ruim?",velt);
					cout << "1 - Sim     2 - N�o" << endl << endl;
					
				
				while (true){
			switch (getch()){
			case 49:{
				system ("cls");
				narrapo ("Em busca de territ�rio, uma aldeia inimiga", velpo);
				narrapo ("Na calada da noite, fez um ataque � sorrelfa", velpo);
				narrapo ("Priorizando a vida, com sua uni�o destru�da", velpo);
				narrapo ("N�o defenderam a aldeia, fugiram com a tal pedra.", velpo);
				system ("cls");
				narrapo ("Eles foram perseguidos, e logo os encontram", velpo);
				narrapo ("Foram mortos um a um, sem poder se defender", velpo);
				narrapo ("Morreram arrependidos das escolhas que tomaram", velpo);
				narrapo ("E ainda perderam a pedra, aquilo que os fez sofrer.", velpo);
				Sleep (300); return 0;

			}
			case 50: {
				system ("cls");
				narrapo ("Como eram povo honrado, o poder n�o os corrompeu tanto", velpo);
				narrapo ("Eles voltaram � raz�o, apesar do vil estrago", velpo);
				narrapo ("A floresta os protegia, o causou o seu espanto", velpo);
				narrapo ("E seguiram suas vidas, com o poder ao seu lado.", velpo);
				Sleep (300); return 0;

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
//////////////////////////////////////////////////////////////////					
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
/////////////////////////////////////////////////////////////////
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
		system ("cls");
		narrapo ("Cortando os c�us ao meio, o visitante chega a casa", velpo);
		narrapo ("J� fora rocha, cometa, e agora meteorito", velpo);
		narrapo ("Ele ruma o oceano, e despenca o c�u em braza", velpo);
		narrapo ("Ser� que ao menos uma vez, ele ter� algum abrigo?", velpo);
		system ("cls");
		narrapo ("Com toda for�a que viera, o mar aberto adentrou", velpo);
		narrapo ("Naquela imensid�o azul, o meteorito n�o era nada", velpo);
		narrapo ("O metal quente que tinha, em um instante esfriou", velpo);
		narrapo ("Com um mundo novo � sua frente, tinha uma grande jornada.", velpo);		
		
	
				
		while (true){
			
					narra ("Quanto o meteorito afundou?",velt);
					cout << "1 - 10 metros   2 - 100 metros   3 - ?????!!" << endl << endl;

			
			switch (getch()){
			case 49:{
				jogando=false;
				system ("cls");
				narrapo ("A escurid�o aumentava a cada instante submerso", velpo);
				narrapo ("Pois o meteorito estava cada vez mais profundo", velpo);
				narrapo ("Ainda sim 10 metros, n�o revelava o universo", velpo);
				narrapo ("Que o meteorito ansiava conhecer cada segundo", velpo);
				system ("cls");
			}
			case 50: {
				system ("cls");
				narrapo ("A escurid�o aumentava a cada instante submerso", velpo);
				narrapo ("Pois o meteorito estava cada vez mais profundo", velpo);
				narrapo ("A press�o era t�o forte, ele s� aguentava um ter�o", velpo);
				narrapo ("Pois fr�gil ficara indo de quente a frio em um segundo.", velpo);
				Sleep (300); return 0;

			}
			case 51: {
				system ("cls");
				narrapo ("A cada instante submerso, a escurid�o aumentava", velpo);
				narrapo ("Pois o meteorito estava cada vez mais profundo", velpo);
				narrapo ("A pouca luz que havia sobrado, desapareceu do nada", velpo);
				narrapo ("Ser� o fim da jornada da pedra de outro mundo?", velpo);
				system ("cls");
				narrapo ("Em meio �s possibilidades, o aleat�rio aconteceu", velpo);
				narrapo ("Sentindo o calor restante, uma baleia o engoliu", velpo);
				narrapo ("Sem saber onde estava indo, o meteorito se perdeu", velpo);
				narrapo ("Estava fadado a ficar preso nesse mundo vazio.", velpo);
				Sleep (300); return 0;
				
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
		
	default: {
				narra( "Acho que essa n�o � uma resposta v�lida ... ",velt);
				jogando=false;
				break;
				}
				
			}
			
			if (jogando==true){
 			break;}
			
		}
		
		system ("cls");
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
