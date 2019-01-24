#pragma once

#include "inicioCadastroProprietario.h"
#include "cadastroMotorInicial.h"
#include "cadastroEntradaConfirmacao.h"

#include "Controlador.h"

#include <msclr\marshal_cppstd.h>


namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cadastroEntradaInicial
	/// </summary>
	public ref class cadastroEntradaInicial : public System::Windows::Forms::Form
	{
	public:
		cadastroEntradaInicial(System::Windows::Forms::Form ^ anterior):anterior(anterior)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cadastroEntradaInicial()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		Controlador * con;
		msclr::interop::marshal_context context;
		System::Windows::Forms::Form ^anterior;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cadastro de Entrada do Motor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número de Série:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L":";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cadastroEntradaInicial::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Próximo>>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cadastroEntradaInicial::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"CPF";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(54, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"CNPJ";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(12, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(257, 47);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados Proprietario";
			// 
			// cadastroEntradaInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 164);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cadastroEntradaInicial";
			this->Text = L"cadastroEntradaInicial";
			this->Load += gcnew System::EventHandler(this, &cadastroEntradaInicial::cadastroEntradaInicial_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cadastroEntradaInicial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		anterior->Show();
		Close();
		delete this;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^tipo;
		if (radioButton1->Checked) {
			tipo = L"CPF:";
		}
		else {
			tipo = L"CNPJ:";
		}
		
		
		if (!con->motorExiste(context.marshal_as<std::string>(textBox1->Text))) {
			if ((!con->pessoaFisicaExiste(context.marshal_as<std::string>(textBox2->Text)) && tipo == L"CPF:")|| (!con->pessoaJuridicaExiste(context.marshal_as<std::string>(textBox2->Text)) && tipo == L"CNPJ:")) {
				inicioCadastroProprietario ^ proprietario = gcnew inicioCadastroProprietario(this,tipo, textBox2->Text,textBox1->Text);
				proprietario->Show();
				Hide();
			}
			else {
				cadastroMotorInicial ^ motor = gcnew cadastroMotorInicial(this, textBox1->Text, tipo, textBox2->Text);
				motor->Show();
				Hide();
			}
		}
		else if(tipo == L"CPF:") {
			cadastroEntradaConfirmacao ^ proxima = gcnew cadastroEntradaConfirmacao(this);
			Motor * mot = new Motor(context.marshal_as<std::string>(textBox1->Text));
			mot = con->motorExiste(context.marshal_as<std::string>(textBox1->Text));
			PessoaFisica * pf = new PessoaFisica(context.marshal_as<std::string>(textBox2->Text));
			pf = con->pessoaFisicaExiste(context.marshal_as<std::string>(textBox2->Text));
    		string str;

			str = mot->getModelo();
			String ^ modelo = gcnew String(str.c_str());

			str = pf->getNome();
			String ^ nome = gcnew String(str.c_str());
			str = pf->getTelefone();
			String ^ telefone = gcnew String(str.c_str());
			Endereco * end = pf->getEndereco();
			str = end->getLogradouro();
			String ^ logradouro = gcnew String(str.c_str());
			str = end->getCEP();
			String ^ cep = gcnew String(str.c_str());
			str = end->getComplemento();
			String ^ complemento = gcnew String(str.c_str());

			proxima->Atualiza(textBox1->Text, modelo, nome, tipo, textBox2->Text, telefone, logradouro, cep, complemento);

			proxima->Show();
			Hide();
		}
		else {
			cadastroEntradaConfirmacao ^ proxima = gcnew cadastroEntradaConfirmacao(this);
			Motor * mot = new Motor(context.marshal_as<std::string>(textBox1->Text));
			mot = con->motorExiste(context.marshal_as<std::string>(textBox1->Text));
			PessoaJuridica * pj = new PessoaJuridica(context.marshal_as<std::string>(textBox2->Text));
			pj = con->pessoaJuridicaExiste(context.marshal_as<std::string>(textBox2->Text));
			string str;

			str = mot->getModelo();
			String ^ modelo = gcnew String(str.c_str());

			str = pj->getNome();
			String ^ nome = gcnew String(str.c_str());
			str = pj->getTelefone();
			String ^ telefone = gcnew String(str.c_str());
			Endereco * end = pj->getEndereco();
			str = end->getLogradouro();
			String ^ logradouro = gcnew String(str.c_str());
			str = end->getCEP();
			String ^ cep = gcnew String(str.c_str());
			str = end->getComplemento();
			String ^ complemento = gcnew String(str.c_str());

			proxima->Atualiza(textBox1->Text, modelo, nome, tipo, textBox2->Text, telefone, logradouro, cep, complemento);

			proxima->Show();
			Hide();
		}
	}
	};
}
