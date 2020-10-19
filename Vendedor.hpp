
#include <string>
#include "Empregado.hpp"
	
class Vendedor : public Empregado {
    
  private:
    double quotaMensalVendas;

  public:
    Vendedor (std::string _nome, double _salarioHora, double _horasTrabalhadas, int _quotaMensalVendas);	
    double quotaTotalAnual();
    void printInfo () override ;
    ~Vendedor(){};
};

#endif
