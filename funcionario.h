#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;

class Funcionario {
protected:    
    string nome;    
    float salarioBase;
private:    
    int id;
public:    
    void setNome(string n);    
    string getNome();
    
    void setSalarioBase(float s);    
    float getSalarioBase();
    
    void setId(int i);    
    int getId();
    
    virtual void exibirInformacoes();    
    virtual float calcularSalarioFinal() = 0;
    
    // destrutor
    virtual ~Funcionario() {}
};
#endif
