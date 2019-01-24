#pragma once

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
	/// Summary for cadastroMotorConfirmacao
	/// </summary>
	public ref class cadastroMotorConfirmacao : public System::Windows::Forms::Form
	{
	public:
		cadastroMotorConfirmacao(System::Windows::Forms::Form ^ anterior, System::Windows::Forms::Form ^ inicio):anterior(anterior),inicio(inicio)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void Atualiza(String ^ tipo, String ^ cpf, String ^ numeroSerie, String ^ modelo) {
			this->label5->Text = tipo;
			this->label6->Text = numeroSerie;
			this->label7->Text = modelo;
			this->label9->Text = cpf;
			return;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cadastroMotorConfirmacao()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label9;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		msclr::interop::marshal_context context;
		System::Windows::Forms::Form ^ anterior, ^inicio;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Confirme os dados do motor:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Num. Série:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modelo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CPF/CNPJ:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"<<Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cadastroMotorConfirmacao::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cadastroMotorConfirmacao::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(80, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"label7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(80, 112);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"label9";
			// 
			// cadastroMotorConfirmacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 180);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cadastroMotorConfirmacao";
			this->Text = L"cadastroMotorConfirma";
			this->Load += gcnew System::EventHandler(this, &cadastroMotorConfirmacao::cadastroMotorConfirma_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cadastroMotorConfirma_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		anterior->Show();
		Close();
		delete this;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Controlador * con = new Controlador();
	if (label5->Text == L"CPF:") {
		con->cadastrarMotor(context.marshal_as<std::string>(label7->Text), context.marshal_as<std::string>(label6->Text), "0", "Em Espera", context.marshal_as<std::string>(label9->Text), "0");
		
		cadastroEntradaConfirmacao ^ proxima = gcnew cadastroEntradaConfirmacao(inicio);
		con->pf = con->pessoaFisicaExiste(context.marshal_as<std::string>(label9->Text));
		
		string str;

		str = con->pf->getNome();
		String ^ nome = gcnew String(str.c_str());
		str = con->pf->getTelefone();
		String ^ telefone = gcnew String(str.c_str());
		con->end = con->pf->getEndereco();
		str = con->end->getLogradouro();
		String ^ logradouro = gcnew String(str.c_str());
		str = con->end->getCEP();
		String ^ cep = gcnew String(str.c_str());
		str = con->end->getComplemento();
		String ^ complemento = gcnew String(str.c_str());

		proxima->Atualiza(label6->Text, label7->Text, nome, label5->Text, label9->Text, telefone, logradouro, cep, complemento);

		proxima->Show();
		Hide();
	}
	else {
		con->cadastrarMotor(context.marshal_as<std::string>(label7->Text), context.marshal_as<std::string>(label6->Text), "0", "Em Espera", "0", context.marshal_as<std::string>(label9->Text));
		
		cadastroEntradaConfirmacao ^ proxima = gcnew cadastroEntradaConfirmacao(inicio);
		con->pj = con->pessoaJuridicaExiste(context.marshal_as<std::string>(label9->Text));

		String ^ nome = gcnew String(con->pj->getNome().c_str());
		String ^ telefone = gcnew String(con->pj->getTelefone().c_str());
		con->end = con->pj->getEndereco();
		String ^ logradouro = gcnew String(con->end->getLogradouro().c_str());
		String ^ cep = gcnew String(con->end->getCEP().c_str());
		String ^ complemento = gcnew String(con->end->getComplemento().c_str());

		proxima->Atualiza(label6->Text, label7->Text, nome, label5->Text, label9->Text, telefone, logradouro, cep, complemento);

		proxima->Show();
		Hide();
	}

}
};
}
