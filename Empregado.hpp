#include <iostream>
#include <string>

class Empregado {
  
  protected:
    std::string nome;
    double salarioHora;
    double horasTrabalhadas;

  public:
    Empregado() = default;
    Empregado(std::string _nome, double _salarioHora, double _horasTrabalhadas);   
    double pagamentoMes();
    virtual void printInfo () = 0;
    ~Empregado(){};
};

#endif
