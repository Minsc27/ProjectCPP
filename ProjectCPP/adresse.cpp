#include "adresse.h"

adresse::adresse() : rue_facturation() , rue_livraison(), code_postal_facturation() , code_postal_livraison(),ville_facturation(),ville_livraison()
{
}

adresse::adresse(std::string _rue_livraison, int _code_postal_livraison, std::string _ville_livraison, std::string _rue_facturation, int _code_postal_faturation, std::string _ville_facturation) : rue_livraison(_rue_livraison), code_postal_livraison(_code_postal_livraison),ville_livraison(_ville_livraison), rue_facturation(_rue_facturation), code_postal_facturation(_code_postal_faturation), ville_facturation(_ville_facturation)
{
}
