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
}

void GestionPersonnel::supprimer(void)
{
}

void GestionPersonnel::afficher(void)
{
}

void GestionPersonnel::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}
