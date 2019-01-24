#include "AtendimentoDAO.h"


AtendimentoDAO::AtendimentoDAO()
{

}

AtendimentoDAO::~AtendimentoDAO()
{

}

Atendimento * AtendimentoDAO::AtendimentoExiste(string numeroProtocolo)
{
	Atendimento * atend = nullptr;
	Usuario * user = nullptr;
	ModoFalha * mf = nullptr;
	Motor * mot1 = nullptr;
	Motor *mot2 = nullptr;
	try {
		sql::Connection * catend0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = catend0->createStatement();
		res = stmt->executeQuery("SELECT numeroProtocolo, dataEntrada, dataDespacho, dataConserto, prioridade, onus, descricaoConserto, cpf, numeroSerie, numeroserieSubstituto, nome from Atendimento where numeroProtocolo  = '" + numeroProtocolo + "'");
		while (res->next()) {
			atend = new Atendimento(res->getString("numeroProtocolo"));
			user = new Usuario(res->getString("cpf"),"M");
			mf = new ModoFalha(res->getString("nome"));
			mot1 = new Motor(res->getString("numeroserie"));
			mot2 = new Motor(res->getString("numeroSerieSubstituto"));
			atend->cadastrarEntrada(res->getString("numeroProtocolo"), res->getString("prioridade"), res->getString("dataEntrada"), mot1);
			atend->cadastrarConserto(res->getString("descricaoConserto"), res->getString("onus"), res->getString("dataConserto"), user, mf);
			atend->substituir(mot2);
			atend->despachar(res->getString("dataDespacho"));
		}
		delete res;
		delete stmt;
	}
	catch (sql::SQLException &e) {

		return nullptr;
	}
	cout << "Done::AtendimentoExiste" << endl;
	return atend;
}

void AtendimentoDAO::cadastrarEntrada(Atendimento * atend)
{
	try {
		sql::Connection * catend1 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		stmt = catend1->createStatement();

		string numeroProtocolo = atend->getProtocolo();
		string dataEntrada = atend->getEntrada();
		string prioridade = atend->getPrioridade();

		Motor * mot1 = atend->getMotor();
		string numeroSerie = mot1->getNumeroSerie();
		string numeroSerieSub = "0";

		stmt->execute("INSERT INTO Atendimento (numeroProtocolo, dataEntrada, prioridade, numeroSerie, numeroSerieSubstituto) VALUES ('" + numeroProtocolo + "','" + dataEntrada + "','" + prioridade + "', '" + numeroSerie + "', '" + numeroSerieSub + "')");
		
	}
	catch (sql::SQLException &e) {

	}
	return;
}

void AtendimentoDAO::consultar(string modelo, string falha)
{
	try {
		sql::Connection * catend2 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = catend2->createStatement();
		if (falha.compare("-----")) {
			res = stmt->executeQuery("SELECT numeroProtocolo FROM Atendimento WHERE numeroSerie in (SELECT numeroSerie FROM Motor WHERE modelo = '" + modelo + "') AND nome = '" + falha + "'");
		}
		else {
			res = stmt->executeQuery("SELECT numeroProtocolo FROM Atendimento WHERE numeroSerie in (SELECT numeroSerie FROM Motor WHERE modelo = '" + modelo + "') AND nome IS NULL");
		}
		while (res->next()) {
			prot.push_front(res->getString("numeroProtocolo"));
		}
	}
	catch (sql::SQLException &e) {

	}

	//delete res;
	//delete stmt;
}
