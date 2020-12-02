#include "GestionPersonnel.h"
#include "Header.h"

GestionPersonnel::GestionPersonnel() : nom(), prenom(), date_embauche()
{
	IDpersonnel++;
}

GestionPersonnel::GestionPersonnel(String^ _nom, String^ _prenom, String^ _date_embauche) : nom(_nom), prenom(_prenom), date_embauche(_date_embauche)
{
	IDpersonnel++;
}

void GestionPersonnel::creer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
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
	/*try
	{
		String^ Constring = "Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update matable set name='" + nom + "',prenom='" + prenom + "',annee='" + annee + "',mois='" + mois + "' ,jour='" + jour + "' WHERE id=" + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e){}*/
}

void GestionPersonnel::supprimer(void)
{
	/*try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from personnel WHERE IDPERSONNEL = " + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}*/
}

void GestionPersonnel::afficher(void)
{
	/*try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from personnel WHERE IDPERSONNEL = " + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}*/
}
