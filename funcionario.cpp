#include "Funcionario.h"
#include <iostream>
using namespace std;

void Funcionario::setNome(string n) {    
    nome = n;
}

string Funcionario::getNome() {    
    return nome;
}

void Funcionario::setSalarioBase(float s) {    
    salarioBase = s;
}

float Funcionario::getSalarioBase() {    
    return salarioBase;
}

void Funcionario::setId(int i) {    
    id = i;
}

int Funcionario::getId() {    
    return id;
}

void Funcionario::exibirInformacoes() {    
    cout << "ID: " << id << endl;    
    cout << "Nome: " << nome << endl;    
    cout << "Salario base: " << salarioBase << endl;
}
