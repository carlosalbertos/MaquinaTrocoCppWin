#include "pch.h"
#include "Moeda.h"

namespace MaquinaTroco {

	using namespace System;
		
	Moeda::Moeda()
	{
	}

	Moeda::Moeda(int iValor)
	{
		this->iValor = iValor;
	}

	Moeda::~Moeda()
	{
	}

	void Moeda::setValor(int iValor)
	{
		this->iValor = iValor;
	}

	int Moeda::getValor(void)
	{
		return this->iValor;
	}

	void Moeda::setQuantidade(int iQuantidade) {
		this->iQuantidade = iQuantidade;
	}

	int Moeda::getQuantidade(void) {
		return this->iQuantidade;
	}
}