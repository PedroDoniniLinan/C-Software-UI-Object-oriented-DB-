#pragma once

#include "cadastroMotorDado.h"

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cadastroMotorInicial
	/// </summary>
	public ref class cadastroMotorInicial : public System::Windows::Forms::Form
	{
	public:
		cadastroMotorInicial(System::Windows::Forms::Form ^ anterior, String ^ numeroSerie, String ^ tipo, String ^ cpf):anterior(anterior),numeroSerie(numeroSerie),tipo(tipo),cpf(cpf)
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
		~cadastroMotorInicial()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		String ^ numeroSerie, ^ tipo, ^ cpf;
		System::Windows::Forms::Form ^ anterior;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"       Motor não Cadastrado!\r\nDeseja Cadastrar um novo motor\?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Não";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cadastroMotorInicial::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(229, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Sim";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cadastroMotorInicial::button2_Click);
			// 
			// cadastroMotorInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 135);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"cadastroMotorInicial";
			this->Text = L"cadastroMotorInicial";
			this->Load += gcnew System::EventHandler(this, &cadastroMotorInicial::cadastroMotorInicial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		cadastroMotorDado ^ prox = gcnew cadastroMotorDado(anterior,numeroSerie, tipo, cpf);
		Hide();
		prox->Show();
	}
	private: System::Void cadastroMotorInicial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		anterior->Show();
		Close();
		delete this;
	}
};
}
