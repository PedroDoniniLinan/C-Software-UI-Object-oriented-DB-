#pragma once

#include "dadosCadastroUsuario.h"

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for inicioCadastroProprietario
	/// </summary>
	public ref class inicioCadastroProprietario : public System::Windows::Forms::Form
	{
	public:
		inicioCadastroProprietario(System::Windows::Forms::Form ^ anterior, String ^tipo, String ^ cpf, String ^ numero) :anterior(anterior), tipo(tipo), cpf(cpf), numero(numero)
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
		~inicioCadastroProprietario()
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
		/// Required designer variable.
		/// </summary>
		String ^tipo, ^cpf, ^numero;
		System::Windows::Forms::Form ^ anterior;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
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
			this->label1->Location = System::Drawing::Point(113, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Propriet�rio N�o Cadastrado!";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inicioCadastroProprietario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Pr�ximo >>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &inicioCadastroProprietario::button2_Click);
			// 
			// inicioCadastroProprietario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 153);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"inicioCadastroProprietario";
			this->Text = L"inicioCadastroProprietario";
			this->Load += gcnew System::EventHandler(this, &inicioCadastroProprietario::inicioCadastroProprietario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inicioCadastroProprietario_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dadosCadastroUsuario ^ proximo = gcnew dadosCadastroUsuario(anterior,tipo,cpf,numero);
		Hide();
		proximo->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Hide();
		anterior->Show();
		Close();
		//Application::Exit();
	}
};
}