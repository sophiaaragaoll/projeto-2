#include <iostream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"

using namespace std;

int main() {
 
    //criação de um vetor de ponteiros para funcionários
    Funcionario* funcionarios[10];
    
    //armazena a quantidade de funcionarios cadastrados
    int quantidade = 0;

    //loop para fazer o cadastro de 6 funcionários 
    for (int i = 0; i < 6; i++) {
    
        // tipo de funcionário que será cadastrado
        int tipo;
        cout << "Digite o tipo do funcionário que deseja cadastrar (1 - Desenvolvedor, 2 - Gerente, 3 - Estagiário): ";
        cin >> tipo;

        Funcionario* f = nullptr;

        switch (tipo) {
            case 1: {
                f = new Desenvolvedor();
                int projetos;
                cout << "Quantidade de projetos: ";
                cin >> projetos;
                
                //downcast para ter acesso a membros específicos da subclasse desenvolvedor 
                ((Desenvolvedor*)f)->setQuantidadeDeProjetos(projetos);
                break;
            }
            case 2: {
                f = new Gerente();
                float bonus;
                cout << "Bônus mensal: ";
                cin >> bonus;
                
                //downcast para ter acesso a membros específicos da subclasse gerente
                ((Gerente*)f)->setBonusMensal(bonus);
                break;
            }
            case 3: {
                f = new Estagiario();
                int horas;
                cout << "Horas trabalhadas: ";
                cin >> horas;
                
                //downcast para ter acesso a membros específicos da subclasses estagiario
                ((Estagiario*)f)->setHorasTrabalhadas(horas);
                break;
            }
            default:
                cout << "O tipo que você digitou é inválido. O Funcionário não foi cadastrado.\n";
                continue; // volta para o início do for
        }
        //verifica se o funcionário foi realmente criado
        if (f != nullptr) {
            int id;
            string nome;
            float salario;

            cout << "ID: ";
            cin >> id;
            f->setId(id); 

            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            f->setNome(nome);

            cout << "Salário base: ";
            cin >> salario;
            f->setSalarioBase(salario);

            //guarda o ponteiro f no vetor de funcionários e incrementa quantidade
            funcionarios[quantidade++] = f;

            cout << "\nFuncionário cadastrado!\n\n";
        }
    }

    cout << "\n=== Funcionários cadastrados: ===\n\n";
    
    //Percorre todos os funcionários cadastrados, mostra as informações e o salário final de cada um
    for (int i = 0; i < quantidade; i++) {
        funcionarios[i]->exibirInformacoes();
        cout << "Salário final: " << funcionarios[i]->calcularSalarioFinal() << endl;
        cout << "=============================\n";
    }

    // liberação da memória 
    for (int i = 0; i < quantidade; i++) {
        delete funcionarios[i];
    }

    return 0;
}
