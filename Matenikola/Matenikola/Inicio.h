#pragma once

#include "cadastroEntradaInicial.h"
#include "geraRelatorioInicial.h"
#include "Controlador.h"
#include <stdio.h>
#include <time.h>

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button3;

			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Finalizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(62, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Cadastrar Entrada";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Inicio::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Gerar Relatório por Modelo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		cadastroEntradaInicial ^ proxima = gcnew cadastroEntradaInicial(this);
		Hide();
		proxima->Show();
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	geraRelatorioInicial ^ proxima = gcnew geraRelatorioInicial(this);
	Hide();
	proxima->Show();
}
};
}
