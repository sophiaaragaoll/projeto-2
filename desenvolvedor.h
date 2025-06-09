#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H
#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:    
    int quantidadeDeProjetos;
public:    
    void setQuantidadeDeProjetos(int qtd);    
    int getQuantidadeDeProjetos();
    void exibirInformacoes();    
    float calcularSalarioFinal();
};
#endif
