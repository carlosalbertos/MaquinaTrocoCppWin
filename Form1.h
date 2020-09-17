#pragma once

#include "Caixa.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MaquinaTroco;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			InitCaixa();
		}
	private: System::Windows::Forms::Button^ buttonSuprimentoMenos;
	private: System::Windows::Forms::Label^ labelQtdMoeda5;

	private: System::Windows::Forms::Label^ labelQtdMoeda4;

	private: System::Windows::Forms::Label^ labelMoeda5;

	private: System::Windows::Forms::Label^ labelMoeda4;
	private: System::Windows::Forms::Label^ labelQtdMoeda3;


	private: System::Windows::Forms::Label^ labelQtdMoeda2;

	private: System::Windows::Forms::Label^ labelMoeda3;

	private: System::Windows::Forms::Label^ labelMoeda2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;








	private: System::Windows::Forms::Button^ buttonSangriaSalvar;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBoxValorTroco;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxValorRecebido;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxValorCompra;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ buttonGerarTroco;
	private: System::Windows::Forms::Label^ labelSaldoCaixa;




	private:  
		Caixa* caixa;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ labelTroco;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco5;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco4;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco0;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco3;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco1;
	private: System::Windows::Forms::Label^ labelQtdMoedaTroco2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ buttonLimparTroco;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
				 Caixa* troco;

	public:


	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBoxSuprimentoQuantidade;
	private: System::Windows::Forms::Label^ labelMoeda0;
	private: System::Windows::Forms::Label^ labelMoeda1;


	protected:

	protected:




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelQtdMoeda1;

	private: System::Windows::Forms::Label^ labelQtdMoeda0;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBoxSuprimentoMoedaValor;

	private: System::Windows::Forms::Button^ buttonSuprimentoSalvar;

	private: System::Windows::Forms::Button^ buttonSuprimentoMais;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxSuprimentoQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->labelMoeda0 = (gcnew System::Windows::Forms::Label());
			this->labelMoeda1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelSaldoCaixa = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda5 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda4 = (gcnew System::Windows::Forms::Label());
			this->labelMoeda5 = (gcnew System::Windows::Forms::Label());
			this->labelMoeda4 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda3 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda2 = (gcnew System::Windows::Forms::Label());
			this->labelMoeda3 = (gcnew System::Windows::Forms::Label());
			this->labelMoeda2 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda1 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoeda0 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSangriaSalvar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSuprimentoMenos = (gcnew System::Windows::Forms::Button());
			this->buttonSuprimentoSalvar = (gcnew System::Windows::Forms::Button());
			this->buttonSuprimentoMais = (gcnew System::Windows::Forms::Button());
			this->comboBoxSuprimentoMoedaValor = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonGerarTroco = (gcnew System::Windows::Forms::Button());
			this->textBoxValorTroco = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxValorRecebido = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxValorCompra = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonLimparTroco = (gcnew System::Windows::Forms::Button());
			this->labelTroco = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco5 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco4 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco0 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco3 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco1 = (gcnew System::Windows::Forms::Label());
			this->labelQtdMoedaTroco2 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxSuprimentoQuantidade
			// 
			this->textBoxSuprimentoQuantidade->Location = System::Drawing::Point(65, 76);
			this->textBoxSuprimentoQuantidade->MaxLength = 3;
			this->textBoxSuprimentoQuantidade->Name = L"textBoxSuprimentoQuantidade";
			this->textBoxSuprimentoQuantidade->Size = System::Drawing::Size(73, 20);
			this->textBoxSuprimentoQuantidade->TabIndex = 1;
			this->textBoxSuprimentoQuantidade->Text = L"1";
			// 
			// labelMoeda0
			// 
			this->labelMoeda0->AutoSize = true;
			this->labelMoeda0->Location = System::Drawing::Point(17, 60);
			this->labelMoeda0->Name = L"labelMoeda0";
			this->labelMoeda0->Size = System::Drawing::Size(28, 13);
			this->labelMoeda0->TabIndex = 2;
			this->labelMoeda0->Text = L"0,01";
			// 
			// labelMoeda1
			// 
			this->labelMoeda1->AutoSize = true;
			this->labelMoeda1->Location = System::Drawing::Point(17, 101);
			this->labelMoeda1->Name = L"labelMoeda1";
			this->labelMoeda1->Size = System::Drawing::Size(28, 13);
			this->labelMoeda1->TabIndex = 3;
			this->labelMoeda1->Text = L"0,05";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Moeda";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->labelSaldoCaixa);
			this->groupBox1->Controls->Add(this->labelQtdMoeda5);
			this->groupBox1->Controls->Add(this->labelQtdMoeda4);
			this->groupBox1->Controls->Add(this->labelMoeda5);
			this->groupBox1->Controls->Add(this->labelMoeda4);
			this->groupBox1->Controls->Add(this->labelQtdMoeda3);
			this->groupBox1->Controls->Add(this->labelQtdMoeda2);
			this->groupBox1->Controls->Add(this->labelMoeda3);
			this->groupBox1->Controls->Add(this->labelMoeda2);
			this->groupBox1->Controls->Add(this->labelQtdMoeda1);
			this->groupBox1->Controls->Add(this->labelQtdMoeda0);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->labelMoeda1);
			this->groupBox1->Controls->Add(this->labelMoeda0);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 313);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Moedas em caixa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(105, 289);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Soma";
			// 
			// labelSaldoCaixa
			// 
			this->labelSaldoCaixa->AutoSize = true;
			this->labelSaldoCaixa->Location = System::Drawing::Point(138, 289);
			this->labelSaldoCaixa->Name = L"labelSaldoCaixa";
			this->labelSaldoCaixa->Size = System::Drawing::Size(28, 13);
			this->labelSaldoCaixa->TabIndex = 16;
			this->labelSaldoCaixa->Text = L"0,00";
			// 
			// labelQtdMoeda5
			// 
			this->labelQtdMoeda5->AutoSize = true;
			this->labelQtdMoeda5->Location = System::Drawing::Point(126, 257);
			this->labelQtdMoeda5->Name = L"labelQtdMoeda5";
			this->labelQtdMoeda5->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda5->TabIndex = 15;
			this->labelQtdMoeda5->Text = L"0";
			// 
			// labelQtdMoeda4
			// 
			this->labelQtdMoeda4->AutoSize = true;
			this->labelQtdMoeda4->Location = System::Drawing::Point(126, 216);
			this->labelQtdMoeda4->Name = L"labelQtdMoeda4";
			this->labelQtdMoeda4->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda4->TabIndex = 14;
			this->labelQtdMoeda4->Text = L"0";
			// 
			// labelMoeda5
			// 
			this->labelMoeda5->AutoSize = true;
			this->labelMoeda5->Location = System::Drawing::Point(17, 257);
			this->labelMoeda5->Name = L"labelMoeda5";
			this->labelMoeda5->Size = System::Drawing::Size(28, 13);
			this->labelMoeda5->TabIndex = 13;
			this->labelMoeda5->Text = L"1,00";
			// 
			// labelMoeda4
			// 
			this->labelMoeda4->AutoSize = true;
			this->labelMoeda4->Location = System::Drawing::Point(17, 216);
			this->labelMoeda4->Name = L"labelMoeda4";
			this->labelMoeda4->Size = System::Drawing::Size(28, 13);
			this->labelMoeda4->TabIndex = 12;
			this->labelMoeda4->Text = L"0,50";
			// 
			// labelQtdMoeda3
			// 
			this->labelQtdMoeda3->AutoSize = true;
			this->labelQtdMoeda3->Location = System::Drawing::Point(126, 181);
			this->labelQtdMoeda3->Name = L"labelQtdMoeda3";
			this->labelQtdMoeda3->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda3->TabIndex = 11;
			this->labelQtdMoeda3->Text = L"0";
			// 
			// labelQtdMoeda2
			// 
			this->labelQtdMoeda2->AutoSize = true;
			this->labelQtdMoeda2->Location = System::Drawing::Point(126, 140);
			this->labelQtdMoeda2->Name = L"labelQtdMoeda2";
			this->labelQtdMoeda2->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda2->TabIndex = 10;
			this->labelQtdMoeda2->Text = L"0";
			// 
			// labelMoeda3
			// 
			this->labelMoeda3->AutoSize = true;
			this->labelMoeda3->Location = System::Drawing::Point(17, 181);
			this->labelMoeda3->Name = L"labelMoeda3";
			this->labelMoeda3->Size = System::Drawing::Size(28, 13);
			this->labelMoeda3->TabIndex = 9;
			this->labelMoeda3->Text = L"0,25";
			// 
			// labelMoeda2
			// 
			this->labelMoeda2->AutoSize = true;
			this->labelMoeda2->Location = System::Drawing::Point(17, 140);
			this->labelMoeda2->Name = L"labelMoeda2";
			this->labelMoeda2->Size = System::Drawing::Size(28, 13);
			this->labelMoeda2->TabIndex = 8;
			this->labelMoeda2->Text = L"0,10";
			// 
			// labelQtdMoeda1
			// 
			this->labelQtdMoeda1->AutoSize = true;
			this->labelQtdMoeda1->Location = System::Drawing::Point(126, 101);
			this->labelQtdMoeda1->Name = L"labelQtdMoeda1";
			this->labelQtdMoeda1->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda1->TabIndex = 7;
			this->labelQtdMoeda1->Text = L"0";
			// 
			// labelQtdMoeda0
			// 
			this->labelQtdMoeda0->AutoSize = true;
			this->labelQtdMoeda0->Location = System::Drawing::Point(126, 60);
			this->labelQtdMoeda0->Name = L"labelQtdMoeda0";
			this->labelQtdMoeda0->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoeda0->TabIndex = 6;
			this->labelQtdMoeda0->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(104, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Quantidade";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonSangriaSalvar);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->buttonSuprimentoMenos);
			this->groupBox2->Controls->Add(this->buttonSuprimentoSalvar);
			this->groupBox2->Controls->Add(this->buttonSuprimentoMais);
			this->groupBox2->Controls->Add(this->comboBoxSuprimentoMoedaValor);
			this->groupBox2->Controls->Add(this->textBoxSuprimentoQuantidade);
			this->groupBox2->Location = System::Drawing::Point(230, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 310);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Suprimento/Sangria";
			// 
			// buttonSangriaSalvar
			// 
			this->buttonSangriaSalvar->Location = System::Drawing::Point(7, 164);
			this->buttonSangriaSalvar->Name = L"buttonSangriaSalvar";
			this->buttonSangriaSalvar->Size = System::Drawing::Size(187, 48);
			this->buttonSangriaSalvar->TabIndex = 7;
			this->buttonSangriaSalvar->Text = L"Sangrar";
			this->buttonSangriaSalvar->UseVisualStyleBackColor = true;
			this->buttonSangriaSalvar->Click += gcnew System::EventHandler(this, &Form1::buttonSangriaSalvar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Quantidade";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Moeda";
			// 
			// buttonSuprimentoMenos
			// 
			this->buttonSuprimentoMenos->Location = System::Drawing::Point(9, 75);
			this->buttonSuprimentoMenos->Name = L"buttonSuprimentoMenos";
			this->buttonSuprimentoMenos->Size = System::Drawing::Size(50, 20);
			this->buttonSuprimentoMenos->TabIndex = 4;
			this->buttonSuprimentoMenos->Text = L"-";
			this->buttonSuprimentoMenos->UseVisualStyleBackColor = true;
			this->buttonSuprimentoMenos->Click += gcnew System::EventHandler(this, &Form1::buttonSuprimentoMenos_Click);
			// 
			// buttonSuprimentoSalvar
			// 
			this->buttonSuprimentoSalvar->Location = System::Drawing::Point(7, 110);
			this->buttonSuprimentoSalvar->Name = L"buttonSuprimentoSalvar";
			this->buttonSuprimentoSalvar->Size = System::Drawing::Size(187, 48);
			this->buttonSuprimentoSalvar->TabIndex = 3;
			this->buttonSuprimentoSalvar->Text = L"Suprir";
			this->buttonSuprimentoSalvar->UseVisualStyleBackColor = true;
			this->buttonSuprimentoSalvar->Click += gcnew System::EventHandler(this, &Form1::buttonSuprimentoSalvar_Click);
			// 
			// buttonSuprimentoMais
			// 
			this->buttonSuprimentoMais->Location = System::Drawing::Point(144, 75);
			this->buttonSuprimentoMais->Name = L"buttonSuprimentoMais";
			this->buttonSuprimentoMais->Size = System::Drawing::Size(50, 20);
			this->buttonSuprimentoMais->TabIndex = 2;
			this->buttonSuprimentoMais->Text = L"+";
			this->buttonSuprimentoMais->UseVisualStyleBackColor = true;
			this->buttonSuprimentoMais->Click += gcnew System::EventHandler(this, &Form1::buttonSuprimentoMais_Click);
			// 
			// comboBoxSuprimentoMoedaValor
			// 
			this->comboBoxSuprimentoMoedaValor->FormattingEnabled = true;
			this->comboBoxSuprimentoMoedaValor->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"0,01", L"0,05", L"0,10", L"0,25",
					L"0,50", L"1,00"
			});
			this->comboBoxSuprimentoMoedaValor->Location = System::Drawing::Point(9, 35);
			this->comboBoxSuprimentoMoedaValor->Name = L"comboBoxSuprimentoMoedaValor";
			this->comboBoxSuprimentoMoedaValor->Size = System::Drawing::Size(185, 21);
			this->comboBoxSuprimentoMoedaValor->TabIndex = 0;
			this->comboBoxSuprimentoMoedaValor->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->buttonGerarTroco);
			this->groupBox4->Controls->Add(this->textBoxValorTroco);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBoxValorRecebido);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBoxValorCompra);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Location = System::Drawing::Point(448, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 310);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Fazer troco";
			// 
			// buttonGerarTroco
			// 
			this->buttonGerarTroco->Location = System::Drawing::Point(9, 140);
			this->buttonGerarTroco->Name = L"buttonGerarTroco";
			this->buttonGerarTroco->Size = System::Drawing::Size(185, 48);
			this->buttonGerarTroco->TabIndex = 6;
			this->buttonGerarTroco->Text = L"Gerar troco";
			this->buttonGerarTroco->UseVisualStyleBackColor = true;
			this->buttonGerarTroco->Click += gcnew System::EventHandler(this, &Form1::buttonGerarTroco_Click);
			// 
			// textBoxValorTroco
			// 
			this->textBoxValorTroco->Enabled = false;
			this->textBoxValorTroco->Location = System::Drawing::Point(9, 110);
			this->textBoxValorTroco->Name = L"textBoxValorTroco";
			this->textBoxValorTroco->Size = System::Drawing::Size(185, 20);
			this->textBoxValorTroco->TabIndex = 5;
			this->textBoxValorTroco->Text = L"0,00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Troco";
			// 
			// textBoxValorRecebido
			// 
			this->textBoxValorRecebido->Location = System::Drawing::Point(9, 71);
			this->textBoxValorRecebido->Name = L"textBoxValorRecebido";
			this->textBoxValorRecebido->Size = System::Drawing::Size(185, 20);
			this->textBoxValorRecebido->TabIndex = 3;
			this->textBoxValorRecebido->Text = L"0,00";
			this->textBoxValorRecebido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxValorRecebido_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Valor recebido";
			// 
			// textBoxValorCompra
			// 
			this->textBoxValorCompra->Location = System::Drawing::Point(9, 32);
			this->textBoxValorCompra->Name = L"textBoxValorCompra";
			this->textBoxValorCompra->Size = System::Drawing::Size(185, 20);
			this->textBoxValorCompra->TabIndex = 1;
			this->textBoxValorCompra->Text = L"0,00";
			this->textBoxValorCompra->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxValorCompra_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Valor da compra";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->buttonLimparTroco);
			this->groupBox3->Controls->Add(this->labelTroco);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco5);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco4);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco0);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco3);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco1);
			this->groupBox3->Controls->Add(this->labelQtdMoedaTroco2);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Location = System::Drawing::Point(668, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 313);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Troco gerado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(113, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Soma";
			// 
			// buttonLimparTroco
			// 
			this->buttonLimparTroco->Location = System::Drawing::Point(6, 284);
			this->buttonLimparTroco->Name = L"buttonLimparTroco";
			this->buttonLimparTroco->Size = System::Drawing::Size(75, 23);
			this->buttonLimparTroco->TabIndex = 10;
			this->buttonLimparTroco->Text = L"Limpar";
			this->buttonLimparTroco->UseVisualStyleBackColor = true;
			this->buttonLimparTroco->Click += gcnew System::EventHandler(this, &Form1::buttonLimparTroco_Click);
			// 
			// labelTroco
			// 
			this->labelTroco->AutoSize = true;
			this->labelTroco->Location = System::Drawing::Point(147, 289);
			this->labelTroco->Name = L"labelTroco";
			this->labelTroco->Size = System::Drawing::Size(28, 13);
			this->labelTroco->TabIndex = 31;
			this->labelTroco->Text = L"0,00";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(26, 27);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 13);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Moeda";
			// 
			// labelQtdMoedaTroco5
			// 
			this->labelQtdMoedaTroco5->AutoSize = true;
			this->labelQtdMoedaTroco5->Location = System::Drawing::Point(135, 257);
			this->labelQtdMoedaTroco5->Name = L"labelQtdMoedaTroco5";
			this->labelQtdMoedaTroco5->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco5->TabIndex = 30;
			this->labelQtdMoedaTroco5->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(26, 60);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 17;
			this->label23->Text = L"0,01";
			// 
			// labelQtdMoedaTroco4
			// 
			this->labelQtdMoedaTroco4->AutoSize = true;
			this->labelQtdMoedaTroco4->Location = System::Drawing::Point(135, 216);
			this->labelQtdMoedaTroco4->Name = L"labelQtdMoedaTroco4";
			this->labelQtdMoedaTroco4->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco4->TabIndex = 29;
			this->labelQtdMoedaTroco4->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(26, 101);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 13);
			this->label22->TabIndex = 18;
			this->label22->Text = L"0,05";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"1,00";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(113, 27);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 13);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Quantidade";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 216);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"0,50";
			// 
			// labelQtdMoedaTroco0
			// 
			this->labelQtdMoedaTroco0->AutoSize = true;
			this->labelQtdMoedaTroco0->Location = System::Drawing::Point(135, 60);
			this->labelQtdMoedaTroco0->Name = L"labelQtdMoedaTroco0";
			this->labelQtdMoedaTroco0->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco0->TabIndex = 21;
			this->labelQtdMoedaTroco0->Text = L"0";
			// 
			// labelQtdMoedaTroco3
			// 
			this->labelQtdMoedaTroco3->AutoSize = true;
			this->labelQtdMoedaTroco3->Location = System::Drawing::Point(135, 181);
			this->labelQtdMoedaTroco3->Name = L"labelQtdMoedaTroco3";
			this->labelQtdMoedaTroco3->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco3->TabIndex = 26;
			this->labelQtdMoedaTroco3->Text = L"0";
			// 
			// labelQtdMoedaTroco1
			// 
			this->labelQtdMoedaTroco1->AutoSize = true;
			this->labelQtdMoedaTroco1->Location = System::Drawing::Point(135, 101);
			this->labelQtdMoedaTroco1->Name = L"labelQtdMoedaTroco1";
			this->labelQtdMoedaTroco1->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco1->TabIndex = 22;
			this->labelQtdMoedaTroco1->Text = L"0";
			// 
			// labelQtdMoedaTroco2
			// 
			this->labelQtdMoedaTroco2->AutoSize = true;
			this->labelQtdMoedaTroco2->Location = System::Drawing::Point(135, 140);
			this->labelQtdMoedaTroco2->Name = L"labelQtdMoedaTroco2";
			this->labelQtdMoedaTroco2->Size = System::Drawing::Size(13, 13);
			this->labelQtdMoedaTroco2->TabIndex = 25;
			this->labelQtdMoedaTroco2->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(26, 140);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"0,10";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(26, 181);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"0,25";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 340);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Location = System::Drawing::Point(100, 100);
			this->Name = L"Form1";
			this->Text = L"Máquina de troco";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}

		void InitCaixa() {
			caixa = new Caixa("caixa.ini", "caixa");
			troco = new Caixa("caixa.ini", "troco");
			
			//this->label6->Text = caixa.getQuantidadeMoeda(1);
			AtualizaMoedasCaixaTela();
			AtualizaMoedasTrocoTela();

		}

		void AtualizaMoedasCaixaTela() {
			this->labelQtdMoeda0->Text = caixa->getQuantidadeMoeda(0).ToString();
			this->labelQtdMoeda1->Text = caixa->getQuantidadeMoeda(1).ToString();
			this->labelQtdMoeda2->Text = caixa->getQuantidadeMoeda(2).ToString();
			this->labelQtdMoeda3->Text = caixa->getQuantidadeMoeda(3).ToString();
			this->labelQtdMoeda4->Text = caixa->getQuantidadeMoeda(4).ToString();
			this->labelQtdMoeda5->Text = caixa->getQuantidadeMoeda(5).ToString();

			this->labelSaldoCaixa->Text = FormataInputValor(caixa->getSaldoCaixa().ToString());
		}

		void AtualizaMoedasTrocoTela() {
			this->labelQtdMoedaTroco0->Text = troco->getQuantidadeMoeda(0).ToString();
			this->labelQtdMoedaTroco1->Text = troco->getQuantidadeMoeda(1).ToString();
			this->labelQtdMoedaTroco2->Text = troco->getQuantidadeMoeda(2).ToString();
			this->labelQtdMoedaTroco3->Text = troco->getQuantidadeMoeda(3).ToString();
			this->labelQtdMoedaTroco4->Text = troco->getQuantidadeMoeda(4).ToString();
			this->labelQtdMoedaTroco5->Text = troco->getQuantidadeMoeda(5).ToString();

			this->labelTroco->Text = FormataInputValor(troco->getSaldoCaixa().ToString());
		}

		void ZerarTroco() {
			for (int i = 0; i < 6; i++) {
				troco->SubMoeda(i, troco->getQuantidadeMoeda(i));
			}
			AtualizaMoedasTrocoTela();
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void buttonSuprimentoMais_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = Convert::ToInt32(textBoxSuprimentoQuantidade->Text);
	i++;
	textBoxSuprimentoQuantidade->Text = i.ToString();
}
private: System::Void buttonSuprimentoMenos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Convert::ToInt32(textBoxSuprimentoQuantidade->Text) > 1) {
		int i = Convert::ToInt32(textBoxSuprimentoQuantidade->Text);
		i--;
		textBoxSuprimentoQuantidade->Text = i.ToString();
	}
}
private: System::Void buttonSuprimentoSalvar_Click(System::Object^ sender, System::EventArgs^ e) {
	int iIndice = comboBoxSuprimentoMoedaValor->SelectedIndex;
	int iQuant = Convert::ToInt32(textBoxSuprimentoQuantidade->Text);
	if (iIndice >= 0 && iQuant > 0) {
		caixa->AddMoeda(iIndice, iQuant);
		AtualizaMoedasCaixaTela();
	}
	else {
		MessageBox::Show("Revise os parâmetros: deve ser selecionado um tipo de moeda e a quantidade deve ser maior do que zero!");
	}
}
private: System::Void buttonSangriaSalvar_Click(System::Object^ sender, System::EventArgs^ e) {
	int iIndice = comboBoxSuprimentoMoedaValor->SelectedIndex;
	int iQuant = Convert::ToInt32(textBoxSuprimentoQuantidade->Text);
	if (iQuant > 0 && caixa->getQuantidadeMoeda(iIndice) >= iQuant) {
		caixa->SubMoeda(iIndice, iQuant);
		AtualizaMoedasCaixaTela();
	}
	else {
		if (iQuant <= 0) {
			MessageBox::Show("A quantidade deve ser maior do que zero!");
		}
		else {
			MessageBox::Show("Não há moedas suficientes para fazer esta sangria!");
		}
	}
}
private: String^ FormataInputValor(String^ s) {
	s = s->Replace(",", "");
	String^ first = s->Substring(0, 1);
	while (first == "0" && s->Length > 1) {
		s = s->Substring(1);
		first = s->Substring(0, 1);
	}

	while (s->Length < 3)
		s = "0" + s;

	String^ sDec = s;
	if (s->Length > 2)
		sDec = s->Insert(s->Length - 2, ",");

	return sDec;
}
private: System::Void textBoxValorCompra_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
	else
	{
		String^ s;
		if (e->KeyChar == 0x08)
		{
			s = this->textBoxValorCompra->Text->Substring(0, this->textBoxValorCompra->Text->Length - 1);
		}
		else {
			s = this->textBoxValorCompra->Text + e->KeyChar;
		}

		this->textBoxValorCompra->Text = FormataInputValor(s);
		this->textBoxValorCompra->SelectionStart = this->textBoxValorCompra->TextLength;
		e->Handled = true;
	}
}
private: System::Void textBoxValorRecebido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
	else
	{
		String^ s;
		if (e->KeyChar == 0x08)
		{
			s = this->textBoxValorRecebido->Text->Substring(0, this->textBoxValorRecebido->Text->Length - 1);
		}
		else {
			s = this->textBoxValorRecebido->Text + e->KeyChar;
		}

		this->textBoxValorRecebido->Text = FormataInputValor(s);
		this->textBoxValorRecebido->SelectionStart = this->textBoxValorRecebido->TextLength;
		e->Handled = true;
	}
}
private: System::Void buttonGerarTroco_Click(System::Object^ sender, System::EventArgs^ e) {
	ZerarTroco();
	Int32 iValCompra = Convert::ToInt32(this->textBoxValorCompra->Text->Replace(",", ""));
	Int32 iValRec = Convert::ToInt32(this->textBoxValorRecebido->Text->Replace(",", ""));
	if (iValRec > iValCompra) {
		this->textBoxValorTroco->Text = FormataInputValor((iValRec - iValCompra).ToString());
		Moeda moedatroco[6];

		int iTroco = iValRec - iValCompra;

		if (caixa->getSaldoCaixa() >= iTroco) {
			//pesquisa as moedas a partir da moeda de maior valor
			for (int i = 5; ((i >= 0) && (iTroco > 0)); i--) {
				//enquanto o valor do troco é maior do que o valor da moeda e tem moeda neste valor ...
				while ((iTroco >= caixa->getValorMoeda(i)) && caixa->getQuantidadeMoeda(i) > 0) {
					caixa->SubMoeda(i, 1);
					troco->AddMoeda(i, 1);
					iTroco -= caixa->getValorMoeda(i);
				}
			}

			//não tem as moedas necessárias para dar o troco -> faz um rollback na retirada de moedas do caixa
			if (iTroco > 0) {
				for (int i = 0; i < 6; i++) {
					if (troco->getQuantidadeMoeda(i) > 0) {
						caixa->AddMoeda(i, troco->getQuantidadeMoeda(i));
						troco->SubMoeda(i, troco->getQuantidadeMoeda(i));
					}
				}

				MessageBox::Show("Não tenho as moedas necessárias para dar o troco!");
			}
		}
		else {
			MessageBox::Show("Não tenho saldo suficiente para dar o troco!");
		}
	}
	else {
		//erro - informe um valor recebido igual ou maior do que o valor da compra
		MessageBox::Show("O valor recebido deve ser igual ou maior que o valor da compra!");
	}

	AtualizaMoedasCaixaTela();
	AtualizaMoedasTrocoTela();
}
private: System::Void buttonLimparTroco_Click(System::Object^ sender, System::EventArgs^ e) {
	ZerarTroco();
}
};
}
