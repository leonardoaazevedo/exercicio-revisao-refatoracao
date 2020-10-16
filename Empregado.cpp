#include "Empregado.hpp"
   #define HORAS 8

   Empregado::Empregado (std::string _nome, double _salarioHora, double _horasTrabalhadas){
     this->nome = _nome;
     this->salarioHora = _salarioHora;
     this->horasTrabalhadas = _horasTrabalhadas;
   }

   double Empregado::pagamentoMes(){
      double horasTotais = this->horasTrabalhadas;
      //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (this->horasTrabalhadas > HORAS) {
          double auxiliar = this->horasTrabalhadas - HORAS;
          horasTotais += auxiliar/ 2;
      }
      double salarioTotal = horasTotais * this->salarioHora;
	    return salarioTotal;
    }
