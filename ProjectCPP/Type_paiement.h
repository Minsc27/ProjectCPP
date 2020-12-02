#pragma once

using namespace System;

ref class Type_paiement
{
public:
	void choix_paiement(void);
	int Getnbpaiement(void);

protected:
private:
	String^ cheque;
	String^ espece;
	String^ virement;
	int nbpaiement;

};