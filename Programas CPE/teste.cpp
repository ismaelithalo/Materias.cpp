#include <iostream>
#include <unistd.h> //Biblioteca do sleep
#include <stdio.h>
#include <vector>
//#include <curses.h>
#include <conio.h>
#include <fstream>
#include <time.h>
#include <string>
#include <locale.h>
using namespace std;

void main_screen (int speed) {
	
	cout<< " #------------------------------------------------------# \n"; usleep(speed);
    cout<< " |                                                      | \n"; usleep(speed);
	cout<< " |             Jogo de adivinhação(Clue)                | \n"; usleep(speed);
	cout<< " |        Desenvolvido por: Samuel & ##### ######       | \n"; usleep(speed);
	cout<< " |         #-#-#         2019/1            #-#-#        | \n"; usleep(speed);
	cout<< " |                                                      | \n"; usleep(speed);
	cout<< " #------------------------------------------------------# \n"; usleep(speed);
	
}
void narra (string texto, int speed) {
	
int i=0;
while (i<texto.length())
{
cout << texto[i];
usleep (speed*30000);
i++;
}
cout << endl;
	
}

int main(){

  setlocale(LC_ALL," Portuguese");
  system("clear");
	
	int vel=2;
	
	main_screen (80000);
	
	//Couts com fins estéticos
	//Ainda vamos mecher nesse sleep
    //Menu

    usleep (30000*vel); 
	cout << " +                                                      +" << endl;
	usleep (30000*vel); 
	cout << "                   Menu de seleção                     " << endl;
    usleep (30000*vel); 
	cout << "                                                         " << endl;
 	narra ("   Escolha uma das teclas para selecionar um personagem ",vel);

	//Leitura do arquivo de Personagens

    string linhas;
    int f = 0;

    ifstream personagem("personagens.txt");
    if (personagem.is_open()){

        while (! personagem.eof() ) {

        f++;

        getline (personagem,linhas);
        cout <<"   \n" << "                   " << "[" << f << "]" <<linhas;
        }

    personagem.close();
    }


    cout << "\n";
    cout << "\n +                                                      +\n";

    //Captura na seleção do personagem
    char tecla=getch();

    while ((int)tecla != 27) {

        switch((int)tecla){

            case '1': {

                cout << "Você selecionou o médico\n";
                break;
            }
            case '2': {

                cout << "Você selecionou o professor\n";
                break;
            }
            case '3': {

                cout << "Você selecionou o engenheiro\n";
                break;
            }
            case '4': {

                cout << "Você selecionou o deputado\n";
                break;
            }
            case '5': {

                cout << "Você selecionou o taxista\n";
                break;
            }
        }

        tecla=getch();
        srand(time(NULL));
        //rand() % 5 +1;
        //cout << "Número sorteado: \n" << morre;
        cout << "\n";
        sleep(0.8);
        cout << "Alguém morreu!\n";
        sleep(0.8);
        cout << "Nós precisamos descobrir quem foi o autor do crime, e iremos identificar por meio de sua linguagem emocional/corporal.\n";
        sleep(0.8);
        cout << "Segundo o laudo da polícia, os únicos que permaneceram vivos foram: ";

        //Mata um personagem
        string linha;
        string temp;
        vector<string> linhasVetor;
        vector<string>::iterator ponteiro;
        int morre = 3;
        //Abre o arquivo personagens.txt
        ifstream meuarquivo("personagens.txt");
        if (meuarquivo.is_open()){
            while (! meuarquivo.eof()){
                getline (meuarquivo,linha);
                //Atribui as linhas do arquivo a um vetor de string
                linhasVetor.push_back(linha);
            }
        meuarquivo.close();
        }
        else cout << "Não foi possível abrir o aquivo !";
        //De fato o que mata o personagem, função erase na posição que o ponteiro aponta no vetor
        ponteiro=linhasVetor.begin()+morre-1;
        linhasVetor.erase(ponteiro);

        //Grava o conteúdo em um arquivo auxiliar
        string narq;
        narq="personagemVetor.txt";
        ofstream arqRm(narq.c_str(), std::ofstream::app);
        //cout << "\n\nArquivo gravado ";

        for(ponteiro = linhasVetor.begin(); ponteiro != linhasVetor.end(); ++ponteiro){

            arqRm << *ponteiro << "\n";

        }

        //Lendo arquivo com as linhas apagadas

        string linhaSaida;
        ifstream arqRmSaida("personagemVetor.txt");
        if (arqRmSaida.is_open()){

            while (! arqRmSaida.eof() ) {

            getline (arqRmSaida,linhaSaida);
            cout <<"\n"<<linhaSaida;
            }

        arqRmSaida.close();
        }

    }
return 0;
}

