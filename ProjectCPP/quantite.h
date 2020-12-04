#pragma once
#include "GestionStock.h"

ref class quantite
{
public:
	quantite();
	quantite(int);
	int Getquantite_article(void) { return quantite_article; }
protected:
private:
	static int IDquantite = 0;
	int quantite_article;
};

