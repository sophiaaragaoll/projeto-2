#include "Desenvolvedor.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Desenvolvedor::setQuantidadeDeProjetos(int qtd) {
    quantidadeDeProjetos = qtd;
}

int Desenvolvedor::getQuantidadeDeProjetos() {
    return quantidadeDeProjetos;
}

void Desenvolvedor::exibirInformacoes() {    
cout << fixed << setprecision(2);    
cout << "ID: " << getId() << endl;    
cout << "Nome: " << getNome() << endl;    
cout << "Tipo: Desenvolvedor" << endl;    
cout << "Projetos: " << getQuantidadeDeProjetos() << endl;    
cout << "Salário base: " << getSalarioBase() << endl;
}

float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500 * quantidadeDeProjetos);
}
