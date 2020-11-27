#pragma once
#include <string>

class GestionCommandes;

class Type_paiement
{
public:
	void choix_paiement(void);

	GestionCommandes** gestionCommandes;

protected:
private:
	std::string cheque;
	std::string espece;
	std::string virement;
	int nbpaiement;

};