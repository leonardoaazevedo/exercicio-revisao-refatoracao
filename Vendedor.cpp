#include <string>
#include "Vendedor.hpp"

 Vendedor::Vendedor (std::string _nome, double _salarioHora, double _horasTrabalhadas, int _quotaMensalVendas){
     this->nome = _nome;
     this->salarioHora = _salarioHora;
     this->horasTrabalhadas = _horasTrabalhadas;
     this->quotaMensalVendas = _quotaMensalVendas;
   }

 double Vendedor::quotaTotalAnual(){
	   double quotaFinal = this->quotaMensalVendas * meses_ano ;
	   return quotaFinal;
 }

 void Vendedor::printInfo ()  {
        std::cout << "Nome: " << this->nome << std::endl;
        std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
        std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
        std::cout << std::endl; 
 }

