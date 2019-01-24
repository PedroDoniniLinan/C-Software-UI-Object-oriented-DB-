#pragma once

#include "geraRelatorioFinal.h"
#include "Controlador.h"

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para geraRelatorioInicial
	/// </summary>
	public ref class geraRelatorioInicial : public System::Windows::Forms::Form
	{
	public:
		geraRelatorioInicial(System::Windows::Forms::Form ^ anterior) :anterior(anterior)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~geraRelatorioInicial()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::Windows::Forms::Form ^ anterior;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Relatórios por Modelo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Escolha o Modelo do Motor:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &geraRelatorioInicial::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Próximo>>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &geraRelatorioInicial::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Escolha o Modo de Falha:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(19, 158);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(137, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(19, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// geraRelatorioInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 270);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"geraRelatorioInicial";
			this->Text = L"geraRelatorioInicial";
			this->Load += gcnew System::EventHandler(this, &geraRelatorioInicial::geraRelatorioInicial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		anterior->Show();
		Close();
		delete this;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	geraRelatorioFinal ^ proximo = gcnew geraRelatorioFinal(this);
	proximo->Atualiza(comboBox1->Text, comboBox2->Text);
	proximo->Show();
	Hide();
}
private: System::Void geraRelatorioInicial_Load(System::Object^  sender, System::EventArgs^  e) {
	Controlador * con = new Controlador();
	con->consultarFalhas();
	for (std::list<string>::iterator it = con->mfs.begin(); it != con->mfs.end(); it++) {
		String ^ str = gcnew String(it->c_str());
		this->comboBox2->Items->Add(str);
	}
	this->comboBox2->Items->Add(L"-----");
	con->consultarModelos();
	for (std::list<string>::iterator it = con->modelos.begin(); it != con->modelos.end(); it++) {
		String ^ str = gcnew String(it->c_str());
		this->comboBox1->Items->Add(str);
	}
}
};
}
