//#include <WinBase.h>
#include "pch.h"
#include "Caixa.h"
#include "Moeda.h"
#include "SimpleIni.h"

namespace MaquinaTroco {
  using namespace std;

  Caixa::Caixa(string sNomeArquivo, string sSecaoIni) {
    lstMoedas[0].setValor(1);
    lstMoedas[1].setValor(5);
    lstMoedas[2].setValor(10);
    lstMoedas[3].setValor(25);
    lstMoedas[4].setValor(50);
    lstMoedas[5].setValor(100);
    iSaldo = 0;

    sNomeArquivoGravar = sNomeArquivo;
    sSecao = sSecaoIni;

    CarregaCaixa();
    CalculaSaldo();
  }

  Caixa::~Caixa()
  {
  }

  void Caixa::CarregaCaixa() {
    //busca os valores do arquivo

    string path = ".\\" + sNomeArquivoGravar;

    CSimpleIniA ini;

    SI_Error rc = ini.LoadFile(path.c_str());
    if (rc < 0) { /* handle error */ };

    const char* pv;
    int j;

    for (int i = 0; i < 6; i++) {
      char cVal[100];
      sprintf_s(cVal, "%d", lstMoedas[i].getValor());

      pv = ini.GetValue(sSecao.c_str(), cVal, "0");
      j = atoi(pv);
      lstMoedas[i].setQuantidade(j);
    }

  }

  void Caixa::SalvaCaixa() {
    string path = ".\\" + sNomeArquivoGravar;
    CSimpleIniA ini;

    SI_Error rc = ini.LoadFile(path.c_str());
    if (rc < 0) { /* handle error */ };

    for (int i = 0; i < 6; i++) {
      char cVal[100];
      sprintf_s(cVal, "%d", lstMoedas[i].getValor());

      char cQtd[100];
      sprintf_s(cQtd, "%d", lstMoedas[i].getQuantidade());

      ini.SetValue(sSecao.c_str(), cVal, cQtd);
    }

    rc = ini.SaveFile(path.c_str());
    if (rc < 0) { /* handle error */ };


  }

  void Caixa::AddMoeda(int iIndice, int iQuantidade) {
    lstMoedas[iIndice].setQuantidade(lstMoedas[iIndice].getQuantidade() + iQuantidade);
    SalvaCaixa();
    CalculaSaldo();
  }

  void Caixa::SubMoeda(int iIndice, int iQuantidade) {
    if (lstMoedas[iIndice].getQuantidade() >= iQuantidade) {
      lstMoedas[iIndice].setQuantidade(lstMoedas[iIndice].getQuantidade() - iQuantidade);
      SalvaCaixa();
      CalculaSaldo();
    }
  }

  int Caixa::getQuantidadeMoeda(int iIndice) {
    return lstMoedas[iIndice].getQuantidade();
  }

  int Caixa::getValorMoeda(int iIndice) {
    return lstMoedas[iIndice].getValor();
  }

  Int32 Caixa::getSaldoCaixa() {
    return iSaldo;
  }

  void Caixa::CalculaSaldo(void)
  {
    iSaldo = getQuantidadeMoeda(0) * getValorMoeda(0);
    iSaldo += getQuantidadeMoeda(1) * getValorMoeda(1);
    iSaldo += getQuantidadeMoeda(2) * getValorMoeda(2);
    iSaldo += getQuantidadeMoeda(3) * getValorMoeda(3);
    iSaldo += getQuantidadeMoeda(4) * getValorMoeda(4);
    iSaldo += getQuantidadeMoeda(5) * getValorMoeda(5);
  }
}