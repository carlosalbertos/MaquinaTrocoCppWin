#pragma once

namespace MaquinaTroco {

	using namespace System;

	public class Moeda
	{
	public:
		Moeda();
		Moeda(int iValor);
		~Moeda();
		void setValor(int);
		int getValor(void);
		void setQuantidade(int);
		int getQuantidade(void);

	private:
		int iValor;
		int iQuantidade;
	};

}

//ref class Moeda
//{
//};
