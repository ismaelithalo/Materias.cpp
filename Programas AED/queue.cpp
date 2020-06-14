#include <iostream>
using namespace std;


class doubleStack{
public:
doubleStack(int max_elements = 1024) {
    data 
    maximo = max_elements;
    topo = -1;
}
~doubleStack();

double pop() {
     topo=topp-1;
     return (data[topo+1]);
}; //remove e retorna topo da pilha

void push(double) {
    topo = topo+1;
    data[topo]= d;
}; //insere no topo da pilha

double peek() {
    return topo;
} //somente consulta valor do topo

bool isEmpty() {
    return (topo == -1);
} //true se pilha estiver vazia

private:
double *data;
int topo;
int maximo;
};