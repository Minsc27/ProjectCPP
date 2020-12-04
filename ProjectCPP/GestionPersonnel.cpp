#include "GestionPersonnel.h"
#include "Header.h"

GestionPersonnel::GestionPersonnel() : nom(), prenom(), annee(), mois(), jour()
{
	IDpersonnel++;
	IDpersonnel1 = IDpersonnel;
}

GestionPersonnel::GestionPersonnel(String^ _nom, String^ _prenom, String^ _annee, String^ _mois, String^ _jour, adresse^ __adresse) : nom(_nom), prenom(_prenom), annee(_annee), mois(_mois), jour(_jour)
{
	_adresse = __adresse;
	IDpersonnel++;
	IDpersonnel1 = IDpersonnel;
}

GestionPersonnel::GestionPersonnel(String^ _nom, String^ _prenom, String^ _annee, String^ _mois, String^ _jour, int _IDpersonnel, adresse^ __adresse) : nom(_nom), prenom(_prenom), annee(_annee), mois(_mois), jour(_jour), IDpersonnel1(_IDpersonnel)
{
	_adresse = __adresse;
}

void GestionPersonnel::creer(void)
{
	
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt2 = gcnew MySqlCommand("insert into personnel values(" + IDpersonnel + "," + _adresse->GetIDadresse() + ",'" + annee + "-" + mois + "-" + jour + "','" + nom + "','" + prenom + "')", ConnectDB);
		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into adresse values(" + _adresse->GetIDadresse() + ",'" + _adresse->Getcode_postallivraison() + "','" + _adresse->Getruelivraison() + "','" + _adresse->Getvillelivraison() + "')", ConnectDB);
		MySqlDataReader^ DR;
		MySqlDataReader^ DR1;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
		ConnectDB->Open();
		DR1 = Adapt2->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionPersonnel::modifier(void)
{
	try
	{
		String^ Constring = "Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update personnel set NOM_P='" + nom + "',PRENOM_P='" + prenom + "',ANNEE_P='" + annee + "',MOIS_P='" + mois + "' ,JOUR_P='" + jour + "' WHERE IDpersonnel=" + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e){}
}

void GestionPersonnel::supprimer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from personnel WHERE IDPERSONNEL = " + IDpersonnel1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
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
