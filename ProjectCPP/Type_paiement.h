#pragma once

using namespace System;

ref class Type_paiement
{
public:
	Type_paiement();
	Type_paiement(String^, double, int);
	int getIDpaiement(void) { return IDpaiement1; }
	int getnbpaiement(void) { return nbpaiement; }
	double getmontant(void) { return montant; }
	String^ gettype_paiement(void) { return type_paiement; }
	void choix_paiement(void);
	int Getnbpaiement(void);
protected:
private:
	static int IDpaiement = 0;
	int IDpaiement1;
	String^ type_paiement;
	double montant;
	int nbpaiement;

};