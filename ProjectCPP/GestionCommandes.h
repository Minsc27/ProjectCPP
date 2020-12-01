#pragma once
#include "Strategy.h"
#include "Type_paiement.h"

class quantite;

ref class GestionCommandes 
	: public Strategy
{
public:
	void creer(void) override;
	void modifier(void) override;
	void supprimer(void) override;
	void afficher(void) override;

	quantite** Association_5;

protected:
private:
	int reference;
	String^ date_emission;
	String^ date_livraison;
	String^ date_paiement;
	String^ type_paiement;
	String^ date_reglement;
};

