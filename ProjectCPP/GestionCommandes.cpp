#include "GestionCommandes.h"
#include "Header.h"

GestionCommandes::GestionCommandes() : reference(), date_emission(), date_livraison(), date_paiement(), type_paiement(), date_reglement()
{
	IDcommandes++;
}

GestionCommandes::GestionCommandes(int _reference, String^ _date_emission, String^ _date_livraison, String^ _date_paiement, String^ _type_paiement, String^ _date_reglement) : reference(_reference), date_emission(_date_emission), date_livraison(_date_livraison), date_paiement(_date_paiement), type_paiement(_type_paiement), date_reglement(_date_reglement)
{
	IDcommandes++;
}

void GestionCommandes::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into commandes values(" + IDcommandes + ",'" + annee + "-" + mois + "-" + jour + "','" + annee + "-" + mois + "-" + jour + "', '"+ 12 +"', '"+ 20 +"' , '" + 14 +"', '" + "reference" +"')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}	
}

void GestionCommandes::modifier(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update commandes set DATE_LIVRAISON = '" + annee + "-" + mois + "-" + jour + "', DATE_EMISSION = '" + "2002" + "-" + "02" + "-" + "04" + "', PRIXHT_C = '" + 12 + "', TVA_C = '" + 20 + "' , PRIXTTC = '" + 18 + "', REFERENCE_C = '" + "referenceupdate" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionCommandes::supprimer(void)
{
	/*try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from commande WHERE IDCOMMANDE = " + IDcommande1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}*/
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
