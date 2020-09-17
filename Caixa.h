#pragma once
#include <string>
#include <iostream>
#include "Moeda.h"
//ref class Caixa
//{
//public:
//  Caixa();
//  ~Caixa();
//};

namespace MaquinaTroco {

	using namespace std;
	using namespace System;

	public class Caixa
	{
	public:
		Caixa(string sNomeArquivo, string sSecaoIni);
		~Caixa();
		void AddMoeda(int iIndice, int iQuantidade);
		void SubMoeda(int iIndice, int iQuantidade);
		int getQuantidadeMoeda(int iIndice);
		int getValorMoeda(int iIndice);
		Int32 getSaldoCaixa();
	private:
		void CarregaCaixa();
		void SalvaCaixa(void);
		void CalculaSaldo();
		string sNomeArquivoGravar;
		string sSecao;
		Moeda lstMoedas[6];
		Int32 iSaldo;

	};

}