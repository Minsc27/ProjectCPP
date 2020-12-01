#include "GestionClients.h"
#include "Header.h"
#include <exception>

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
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into client values(" + IDclient + ",'" + nom + "','" + prenom + "','" + "2002" + "-" + "02" + "-" + "04" + "','" + "2002" + "-" + "02" + "-" + "04" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}	
}

void GestionClients::modifier(void)
{
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
