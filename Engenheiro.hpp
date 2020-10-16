#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;

  public:
    Engenheiro (std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos);
    void printInfo () override ;
    ~Engenheiro(){};
};

#endif
