#pragma once
#include <iostream>
class adresse
{
public:
	adresse(std::string,int, std::string);
	std::string Getruelivraison() { return rue_livraison; }
	std::string Getrvillelivraison() { return ville_livraison; }
	int Getcode_postallivraison() { return code_postal_livraison; }
	std::string Getruefacturation() { return rue_facturation; }
	std::string Getrvillefacturation() { return ville_facturation; }
	int Getcode_postalfacturation() { return code_postal_facturation; }
protected:
private:
	std::string rue_livraison;
	int code_postal_livraison;
	std::string ville_livraison;
	std::string rue_facturation;
	int code_postal_facturation;
	std::string ville_facturation;
};

