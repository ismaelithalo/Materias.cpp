#include <iostream>
using namespace std;

class Aluno {
    string nome;
    string matricula;
    string curso;
    int idade;

    public:
    Aluno();
    Aluno(string _nome, string _matricula, string _curso, int _idade) {
        nome = _nome;
        matricula = _matricula;
        curso = _curso;
        idade = _idade;
    }

    void getNome () {
        cout << nome << endl;
    }
    void setNome (string x) {
        nome = x;
    }
    void getMatricula () {
        cout << matricula << endl;
    }
    void setMatricula (string x) {
        matricula = x;
    }
    void getCurso () {
        cout << curso << endl;
    }
    void setCurso (string x) {
        curso = x;
    }
    void getIdade () {
        cout << idade << endl;
    }
    void setIdade (int x) {
        idade = x;
    }
};

int main() {

    cout << "Digite o nome do aluno:" << endl;
    string nome; cin >> nome;
    cout << "Digite a matricula do aluno:" << endl;
    string mat; cin >> mat;
    cout << "Digite o curso do aluno:" << endl;
    string curso; cin >> curso;
    cout << "Digite a idade do aluno:" << endl;
    int idade; cin >> idade;

    Aluno a1(nome,mat,curso,idade);

    cout << "Aluno cadastrado, os dados são:" << endl;
    a1.getNome();
    a1.getIdade();
    a1.getMatricula();
    a1.getCurso();

    return 0;
}