#include "GestionClients.h"
#include "Header.h"


//int GestionClients::IDclient = 0;

GestionClients::GestionClients() : nom(), prenom(), annee(),mois(),jour()
{
	IDclient++;
	IDclient1 = IDclient;
}

GestionClients::GestionClients(String^ _nom, String^ _prenom,String^ _annee,String^ _mois, String^ _jour, adresse^ _adresse_livraison, adresse^ _adresse_facturation) : nom(_nom),prenom(_prenom), annee(_annee), mois(_mois), jour(_jour)
{
	adresse_facturation = _adresse_facturation;
	adresse_livraison = _adresse_livraison;
	IDclient++;
	IDclient1 = IDclient;
}

GestionClients::GestionClients(String^ _nom, String^ _prenom, String^ _annee, String^ _mois, String^ _jour, int _IDclient, adresse^ _adresse_livraison, adresse^ _adresse_facturation) : nom(_nom), prenom(_prenom), annee(_annee), mois(_mois), jour(_jour), IDclient1(_IDclient)
{
	adresse_facturation = _adresse_facturation;
	adresse_livraison = _adresse_livraison;
}

//using namespace ProjectCPP;
void GestionClients::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into client values(" + IDclient + ",'" + nom + "','" + prenom + "','" + annee + "-" + mois + "-" + jour + "','" + "2020" + "-" + "12" + "-" + "04" + "')", ConnectDB);
		MySqlCommand^ Adapt2 = gcnew MySqlCommand("insert into adresse values(" + adresse_facturation->GetIDadresse() + ",'" + adresse_facturation->Getcode_postallivraison() + "','" + adresse_facturation->Getruelivraison() + "','" + adresse_facturation->Getvillelivraison() + "')", ConnectDB);
		MySqlCommand^ Adapt3 = gcnew MySqlCommand("insert into adresse values(" + adresse_livraison->GetIDadresse() + ",'" + adresse_livraison->Getcode_postallivraison() + "','" + adresse_livraison->Getruelivraison() + "','" + adresse_livraison->Getvillelivraison() + "')", ConnectDB);
		MySqlCommand^ Adapt4 = gcnew MySqlCommand("insert into facturer values("+ adresse_facturation->GetIDadresse() +"," + IDclient + ")", ConnectDB);
		MySqlCommand^ Adapt5 = gcnew MySqlCommand("insert into livrer values(" + adresse_livraison->GetIDadresse() +"," + IDclient + ")", ConnectDB);

		MySqlDataReader^ DR;
		MySqlDataReader^ DR1; 
		MySqlDataReader^ DR2;
		MySqlDataReader^ DR3;
		MySqlDataReader^ DR4;

		ConnectDB->Open();
		DR = Adapt1->ExecuteReader(); 
		ConnectDB->Close();
		ConnectDB->Open();
		DR1 = Adapt2->ExecuteReader();
		ConnectDB->Close();
		ConnectDB->Open();
		DR2 = Adapt3->ExecuteReader();
		ConnectDB->Close();
		ConnectDB->Open();
		DR3 = Adapt4->ExecuteReader();
		ConnectDB->Close();
		ConnectDB->Open();
		DR4 = Adapt5->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionClients::modifier(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update client set NOM_C = '" + nom + "',PRENOM_C = '" + prenom + "',ANNIVERSAIRE = '" + annee + "-" + mois + "-" + jour + "',PREMIERE_COMMANDE = '" + "2002" + "-" + "02" + "-" + "04" + "' WHERE IDCLIENT = "+ IDclient1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}

}

void GestionClients::supprimer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from client WHERE IDCLIENT = " + IDclient1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionClients::afficher(void)
{
	/*try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("select * client WHERE IDCLIENT = " + IDclient1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}*/
}

int GestionClients::GetIDclient(void)
{
	return IDclient;
}

/*void GestionClients::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}*/
