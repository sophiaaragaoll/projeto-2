#include "Estagiario.h"
#include <iostream>
#include <iomanip> 
using namespace std;

void Estagiario::setHorasTrabalhadas(int h) {
    horasTrabalhadas = h;
}

int Estagiario::getHorasTrabalhadas() {
    return horasTrabalhadas;
}

void Estagiario::exibirInformacoes() {
    cout << fixed << setprecision(2);
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << getHorasTrabalhadas() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0);
}
