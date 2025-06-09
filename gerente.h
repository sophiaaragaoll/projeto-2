#ifndef GERENTE_H
#define GERENTE_H
#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;
public:
    void setBonusMensal(float b);
    float getBonusMensal();
    void exibirInformacoes();
    float calcularSalarioFinal();
};
#endif
