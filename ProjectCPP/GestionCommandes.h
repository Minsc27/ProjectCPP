#pragma once
#include "Strategy.h"
#include "Type_paiement.h"
#include "quantite.h"
#include "GestionClients.h"
#include "GestionStock.h"

ref class type_paiement;

ref class GestionCommandes 
	: public Strategy
{
public:
	GestionCommandes();
	GestionCommandes(int,int,Type_paiement^,quantite^,String^,String^,String^,String^,String^,String^,String^,String^,String^,String^,String^,String^);
	void creer(void) override;
	void modifier(void) override;
	void supprimer(void) override;
	void afficher(void) override;
	//void ConvertDate(String^);

protected:
private:
	quantite^ _quantite;
	Type_paiement^ _type_paiement;
	int _article;


	static int IDcommandes = 0;

	int _client;
	String^ annee_emission;
	String^ mois_emission;
	String^ jour_emission;
	String^ annee_livraison;
	String^ mois_livraison;
	String^ jour_livraison;
	String^ annee_paiement;
	String^ mois_paiement;
	String^ jour_paiement;
	String^ annee_reglement;
	String^ mois_reglement;
	String^ jour_reglement;
};

