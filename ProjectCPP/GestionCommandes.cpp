#include "GestionCommandes.h"
#include "Header.h"

void GestionCommandes::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into commandes values(" + IDcommandes + ",'" + "2002" + "-" + "02" + "-" + "04" + "','" + "2002" + "-" + "02" + "-" + "04" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}	
}

void GestionCommandes::modifier(void)
{
}

void GestionCommandes::supprimer(void)
{
}

void GestionCommandes::afficher(void)
{
}
