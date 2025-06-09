#include "Gerente.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Gerente::setBonusMensal(float b) {
    bonusMensal = b;
}

float Gerente::getBonusMensal() {
    return bonusMensal;
}

void Gerente::exibirInformacoes() {
    cout << fixed << setprecision(2);
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << getBonusMensal() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
}


float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}
