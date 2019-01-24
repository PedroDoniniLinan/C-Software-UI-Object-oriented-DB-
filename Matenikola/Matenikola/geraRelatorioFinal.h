#pragma once

#include "Controlador.h"
#include "geraRelatorioDados.h"

#include <msclr\marshal_cppstd.h>

namespace Matenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para geraRelatorioFinal
	/// </summary>
	public ref class geraRelatorioFinal : public System::Windows::Forms::Form
	{
	public:
		geraRelatorioFinal(System::Windows::Forms::Form ^ anterior) :anterior(anterior)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}
		void Atualiza(String ^ modelo, String ^ falha) {
			this->label5->Text = modelo;
			this->label6->Text = falha;
			return;
		}
	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~geraRelatorioFinal()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::Windows::Forms::Form ^ anterior;
		msclr::interop::marshal_context context;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Relatórios por Modelo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Modelo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modo de Falha:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Relatórios:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"<<Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &geraRelatorioFinal::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(75, 115);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(194, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Próximo>>";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &geraRelatorioFinal::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(63, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(100, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"label6";
			// 
			// geraRelatorioFinal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(281, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"geraRelatorioFinal";
			this->Text = L"geraRelatorioFinal";
			this->Load += gcnew System::EventHandler(this, &geraRelatorioFinal::geraRelatorioFinal_Load);
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
	geraRelatorioDados ^proxima = gcnew geraRelatorioDados(anterior);
	Controlador * con = new Controlador();

	Atendimento * at = new Atendimento(context.marshal_as<std::string>(comboBox1->SelectedItem->ToString()));
	at = con->atendimentoExiste(context.marshal_as<std::string>(comboBox1->SelectedItem->ToString()));

	Motor * mot = at->getMotor();
	mot = con->motorExiste(mot->getNumeroSerie());

	if (mot->getPF()) {
		PessoaFisica * pf = mot->getPF();
		pf = con->pessoaFisicaExiste(pf->getCPF());

		string str = at->getOnus();
		if (!str.compare("")) str = "-----";
		String ^ onus = gcnew String(str.c_str());
		str = at->getDescricaoConserto();
		if (!str.compare("")) str = "-----";
		String ^ descricao = gcnew String(str.c_str());
		str = at->getEntrada();
		String ^ dataEntrada = gcnew String(str.c_str());
		str = at->getDespacho();
		if (!str.compare("")) str = "-----";
		String ^ dataDespacho = gcnew String(str.c_str());
		str = at->getConserto();
		if (!str.compare("")) str = "-----";
		String ^ dataConserto = gcnew String(str.c_str());
		str = at->getPrioridade();
		String ^ prioridade = gcnew String(str.c_str());
		
		Usuario * mec = at->getMecanico();
		str = mec->getCPF();
		if (!str.compare("")) str = "-----";
		String ^ uCpf = gcnew String(str.c_str());

		String ^ falha = label6->Text;

		Motor * motSub = at->getMotorSub();
		motSub = con->motorExiste(motSub->getNumeroSerie());
		string nseriesub = motSub->getNumeroSerie();
		if (!nseriesub.compare("0")) str = "-----";
		else str = nseriesub;
		String ^ serieSub = gcnew String(str.c_str());
		str = motSub->getModelo();
		if (!nseriesub.compare("0")) str = "-----";
		String ^ modeloSub = gcnew String(str.c_str());

		str = mot->getNumeroSerie();
		String ^ serie = gcnew String(str.c_str());
		str = mot->getModelo();
		String ^ modelo = gcnew String(str.c_str());

		str = pf->getCPF();
		String ^ cpf = gcnew String(str.c_str());
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

		proxima->Atualiza(comboBox1->SelectedItem->ToString(), dataEntrada, dataConserto, dataDespacho, onus, falha, descricao, prioridade, uCpf, serie, modelo, serieSub, modeloSub, nome, L"CPF:", cpf, telefone, logradouro, cep, complemento);
	}
	else {
		PessoaJuridica * pj = mot->getPJ();
		pj = con->pessoaJuridicaExiste(pj->getCNPJ());

		string str = at->getOnus();
		if (!str.compare("")) str = "-----";
		String ^ onus = gcnew String(str.c_str());
		str = at->getDescricaoConserto();
		if (!str.compare("")) str = "-----";
		String ^ descricao = gcnew String(str.c_str());
		str = at->getEntrada();
		String ^ dataEntrada = gcnew String(str.c_str());
		str = at->getDespacho();
		if (!str.compare("")) str = "-----";
		String ^ dataDespacho = gcnew String(str.c_str());
		str = at->getConserto();
		if (!str.compare("")) str = "-----";
		String ^ dataConserto = gcnew String(str.c_str());
		str = at->getPrioridade();
		String ^ prioridade = gcnew String(str.c_str());

		Usuario * mec = at->getMecanico();
		str = mec->getCPF();
		if (!str.compare("")) str = "-----";
		String ^ uCpf = gcnew String(str.c_str());

		String ^ falha = label6->Text;

		Motor * motSub = at->getMotorSub();
		motSub = con->motorExiste(motSub->getNumeroSerie());
		string nseriesub = motSub->getNumeroSerie();
		if (!nseriesub.compare("0") || !nseriesub.compare("")) str = "-----";
		else str = nseriesub;
		String ^ serieSub = gcnew String(str.c_str());
		str = motSub->getModelo();
		if (!nseriesub.compare("0") || !nseriesub.compare("")) str = "-----";
		String ^ modeloSub = gcnew String(str.c_str());

		str = mot->getNumeroSerie();
		String ^ serie = gcnew String(str.c_str());
		str = mot->getModelo();
		String ^ modelo = gcnew String(str.c_str());

		str = pj->getCNPJ();
		String ^ cnpj = gcnew String(str.c_str());
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

		proxima->Atualiza(comboBox1->SelectedItem->ToString(), dataEntrada, dataConserto, dataDespacho, onus, falha, descricao, prioridade, uCpf, serie, modelo, serieSub, modeloSub, nome, L"CNPJ:", cnpj, telefone, logradouro, cep, complemento);
	}
	proxima->Show();
	Hide();

}
private: System::Void geraRelatorioFinal_Load(System::Object^  sender, System::EventArgs^  e) {
	Controlador * con = new Controlador();
	con->consultarAtendimentos(context.marshal_as<std::string>(label5->Text), context.marshal_as<std::string>(label6->Text));
	for (std::list<string>::iterator it = con->protocolos.begin(); it != con->protocolos.end(); it++) {
		String ^ str = gcnew String(it->c_str());
		this->comboBox1->Items->Add(str);
	}
}
};
}
