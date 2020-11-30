#pragma once
#include "Strategy.h"

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
	double date_emission;
	double date_livraison;
	double date_paiement;
	double type_paiement;
	double date_reglement;
};

