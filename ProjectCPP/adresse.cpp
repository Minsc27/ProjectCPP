#include "adresse.h"

adresse::adresse() : rue_livraison(), code_postal_livraison(), ville_livraison()
{
}

adresse::adresse(String^ _rue_livraison, int^ _code_postal_livraison, String^ _ville_livraison) : rue_livraison(_rue_livraison), code_postal_livraison(_code_postal_livraison), ville_livraison(_ville_livraison)
{
	IDadresse1++;
	IDadresse = IDadresse1;
}

adresse::adresse(String^ _rue_livraison, int^ _code_postal_livraison, String^ _ville_livraison, String^ _rue_facturation, int^ _code_postal_facturation, String^ _ville_facturation) :  rue_livraison(_rue_livraison), code_postal_livraison(_code_postal_livraison), ville_livraison(_ville_livraison)
{
	IDadresse1++;
	IDadresse = IDadresse1;
}
