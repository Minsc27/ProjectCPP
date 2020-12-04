#include "GestionCommandes.h"
#include "Header.h"

GestionCommandes::GestionCommandes() :_article(),  _client(), annee_emission(), mois_emission(), jour_emission(), annee_livraison(), mois_livraison(), jour_livraison(), annee_paiement(), mois_paiement(), jour_paiement(), annee_reglement(), mois_reglement(), jour_reglement()
{
	IDcommandes++;
}

GestionCommandes::GestionCommandes(int __article,int __client, Type_paiement^ __type_paiement, quantite^ __quantite, String^ _annee_emission, String^ _mois_emission, String^ _jour_emission,  String^ _annee_livraison, String^ _mois_livraison, String^ _jour_livraison,String^ _annee_paiement,String^ _mois_paiement, String^ _jour_paiement, String^ _annee_reglement , String^ _mois_reglement,String^ _jour_reglement) : _article(__article), _client(__client),annee_emission(_annee_emission), mois_emission(_mois_emission), jour_emission(_jour_emission), annee_livraison(_annee_livraison), mois_livraison(_mois_livraison), jour_livraison(_jour_livraison), annee_paiement(_annee_paiement), mois_paiement(_mois_paiement), jour_paiement(_jour_paiement), annee_reglement(_annee_reglement), mois_reglement(_mois_reglement), jour_reglement(_jour_reglement)
{
	_type_paiement = __type_paiement;
	_quantite = __quantite;
	IDcommandes++;
}

void GestionCommandes::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into type_de_paiement values(" + _type_paiement->getIDpaiement() + ",'" + _type_paiement->gettype_paiement() + "')", ConnectDB);
		MySqlCommand^ Adapt2 = gcnew MySqlCommand("insert into paiement values(" + _type_paiement->getIDpaiement() + ",'" + _type_paiement->getIDpaiement() + "', '" + annee_paiement + "-" + mois_paiement + "-" + jour_paiement + "','" + _type_paiement->getmontant() + "')", ConnectDB);
		MySqlCommand^ Adapt3 = gcnew MySqlCommand("insert into commande values(" + IDcommandes + ",'"+ _type_paiement->getIDpaiement() +"','" + annee_livraison + "-" + mois_livraison + "-" + jour_livraison + "','" + annee_emission + "-" + mois_emission + "-" + jour_emission + "', '"+ 248 +"', '"+ 20 +"' , '" + 248 +"', '" + "reference" +"')", ConnectDB);
		MySqlCommand^ Adapt4 = gcnew MySqlCommand("insert into association_12 values("+ _article +",'"+ IDcommandes +"','"+ _quantite->Getquantite_article() +"')", ConnectDB);
		MySqlCommand^ Adapt5 = gcnew MySqlCommand("insert into passer values("+ _client +","+ IDcommandes +")", ConnectDB);

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

void GestionCommandes::modifier(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update commandes set DATE_LIVRAISON = '" + annee_livraison + "-" + mois_livraison + "-" + jour_livraison + "', DATE_EMISSION = '" + annee_emission + "-" + mois_emission + "-" + jour_emission + "', PRIXHT_C = '" + 12 + "', TVA_C = '" + 10 + "' , PRIXTTC = '" + 18 + "', REFERENCE_C = '" + "referenceupdate" + "')", ConnectDB);
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