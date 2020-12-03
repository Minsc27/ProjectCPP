#pragma once
using namespace System;

ref class adresse
{
public:
	adresse();
	adresse(String^, int^, String^);
	adresse(String^, int^, String^, String^, int^, String^);
	String^ Getruelivraison() { return rue_livraison; }
	String^ Getvillelivraison() { return ville_livraison; }
	int^ Getcode_postallivraison() { return code_postal_livraison; }
	int GetIDadresse() { return IDadresse; }
protected:
private:
	static int IDadresse1 = 0;
	int IDadresse;
	String^ rue_livraison;
	int^ code_postal_livraison;
	String^ ville_livraison;
};

