#pragma once

//#include "Inicio.h"

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cadastroEntradaFinal
	/// </summary>
	public ref class cadastroEntradaFinal : public System::Windows::Forms::Form
	{
	public:
		cadastroEntradaFinal(System::Windows::Forms::Form ^ inicio, String ^ protocolo):inicio(inicio),protocolo(protocolo)
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
		~cadastroEntradaFinal()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		String ^ protocolo;
		System::Windows::Forms::Form ^ inicio;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"                    Cadastro Finalizado!\r\nO número de Protocolo deste atendimento"
				L" é:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cadastroEntradaFinal::button1_Click);
			// 
			// cadastroEntradaFinal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 141);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cadastroEntradaFinal";
			this->Text = L"cadastroEntradaFim";
			this->Load += gcnew System::EventHandler(this, &cadastroEntradaFinal::cadastroEntradaFinal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cadastroEntradaFinal_Load(System::Object^  sender, System::EventArgs^  e) {
		label2->Text = protocolo;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		inicio->Show();
		Close();
		delete this;
	}
	};
}
