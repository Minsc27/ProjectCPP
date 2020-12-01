#include "GestionCommandes.h"
#include "Header.h"

GestionCommandes::GestionCommandes() : reference(), date_emission(), date_livraison(), date_paiement(), type_paiement(), date_reglement()
{
	IDcommandes++;
}

GestionCommandes::GestionCommandes(int _reference, String^ _date_emission, String^ _date_livraison, String^ _date_paiement, String^ _type_paiement, String^ _date_reglement) : reference(_reference), date_emission(_date_emission), date_livraison(_date_livraison), date_paiement(_date_paiement), type_paiement(), date_reglement()
{
	IDcommandes++;
}

void GestionCommandes::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password1234;Database=ProjetBDD";
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

/*void GestionCommandes::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}*/
