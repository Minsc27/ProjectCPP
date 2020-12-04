#include "Type_paiement.h"

Type_paiement::Type_paiement() : type_paiement(), montant(), nbpaiement()
{
    IDpaiement++;
    IDpaiement1 = 0;
}

Type_paiement::Type_paiement(String^ _type_paiement, double _montant, int _nbpaiement) : type_paiement(_type_paiement), montant(_montant), nbpaiement(_nbpaiement)
{
    IDpaiement++;
    IDpaiement = 0;
}

void Type_paiement::choix_paiement(void)
{
}

int Type_paiement::Getnbpaiement(void)
{
    return nbpaiement;
}
