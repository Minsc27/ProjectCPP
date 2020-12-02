#include "GestionPersonnel.h"
#include "Header.h"

GestionPersonnel::GestionPersonnel() : nom(), prenom(), annee(), mois(), jour()
{
	IDpersonnel++;
}

GestionPersonnel::GestionPersonnel(String^ _nom, String^ _prenom, String^ _annee, String^ _mois, String^ _jour) : nom(_nom), prenom(_prenom), annee(_annee), mois(_mois), jour(_jour)
{
	IDpersonnel++;
}

GestionPersonnel::GestionPersonnel(String^ _nom, String^ _prenom, String^ _annee, String^ _mois, String^ _jour, int _IDpersonnel) : nom(_nom), prenom(_prenom), annee(_annee), mois(_mois), jour(_jour), IDpersonnel1(_IDpersonnel)
{
}

void GestionPersonnel::creer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into personnel values(" + IDpersonnel +  ",'" + annee + "-" + mois + "-" + jour + "','" + nom + "','" + prenom + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionPersonnel::modifier(void)
{
	try
	{
		String^ Constring = "Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update personnel set NOM_P='" + nom + "',PRENOM_P='" + prenom + "',ANNEE_P='" + annee + "',MOIS_P='" + mois + "' ,JOUR_P='" + jour + "' WHERE IDpersonnel=" + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();

		ConnectDB->Close();

		MessageBox::Show("Informations mises à jour");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

void GestionPersonnel::supprimer(void)
{
}

void GestionPersonnel::afficher(void)
{
}

int GestionPersonnel::GetIDpersonnel(void)
{
	return IDpersonnel;
}

/*void GestionPersonnel::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}*/
