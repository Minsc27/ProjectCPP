#pragma once
#include "GestionCommandes.h"
using namespace System;

ref class Type_paiement
{
public:
	void choix_paiement(void);

	GestionCommandes^ gestionCommandes;

protected:
private:
	String^ cheque;
	String^ espece;
	String^ virement;
	int nbpaiement;

};