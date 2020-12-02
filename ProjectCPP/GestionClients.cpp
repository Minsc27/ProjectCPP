#include "GestionClients.h"
#include "Header.h"

//int GestionClients::IDclient = 0;

GestionClients::GestionClients() : nom(), prenom(), date_naissance()
{
	IDclient++;
}

GestionClients::GestionClients(String^ _nom, String^ _prenom, String^ _date_naissance) : nom(_nom),prenom(_prenom), date_naissance(_date_naissance)
{
	IDclient++;
}

//using namespace ProjectCPP;
void GestionClients::creer(void)
{
	String^ annee = "";
	String^ mois = "";
	String^ jour = "";
	for (int i = 0; i < 4; i++) {
		annee += date_naissance[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += date_naissance[i];
		jour += date_naissance[i + 3];
	}
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into client values(" + IDclient + ",'" + nom + "','" + prenom + "','" + annee + "-" + mois + "-" + jour + "','" + "2002" + "-" + "02" + "-" + "04" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionClients::modifier(void)
{
	try
	{
		String^ constr = "Server=127.0.0.1;user=root;Password=Password123;Database=ProjetBDD";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		int id = Int32::Parse(textBox1->Text);
		String^ nom = textBox4->Text;
		String^ prenom = textBox2->Text;
		String^ date_naissance = textBox3->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("update matable nom='" + nom + "',prenom='" + prenom + "',date_naissance='" + date_naissance + "' WHERE id=" + id, con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();

		con->Close();

		MessageBox::Show("Informations mises à jour");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

void GestionClients::supprimer(void)
{
}

void GestionClients::afficher(void)
{
}

int GestionClients::GetIDclient(void)
{
	return IDclient;
}
