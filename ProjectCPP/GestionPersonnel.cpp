#include "GestionPersonnel.h"
#include "Header.h"

void GestionPersonnel::creer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into personnel values(" + IDpersonnel + ",'" + nom + "','" + prenom + "','" + "2002" + "-" + "02" + "-" + "04" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionPersonnel::modifier(void)
{
}

void GestionPersonnel::supprimer(void)
{
}

void GestionPersonnel::afficher(void)
{
}
