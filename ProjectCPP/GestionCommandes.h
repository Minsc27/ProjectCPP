#pragma once
#include "Strategy.h"
#include "Type_paiement.h"

class quantite;

ref class GestionCommandes 
	: public Strategy
{
public:
	GestionCommandes();
	GestionCommandes(int, String^, String^, String^, String^, String^);
	void creer(void) override;
	void modifier(void) override;
	void supprimer(void) override;
	void afficher(void) override;
	//void ConvertDate(String^);

	quantite** Association_5;

protected:
private:
	static int IDcommandes = 0;
	int reference;
	String^ date_emission;
	String^ date_livraison;
	String^ date_paiement;
	String^ type_paiement;
	String^ date_reglement;

	String^ annee;
	String^ mois;
	String^ jour;
};

