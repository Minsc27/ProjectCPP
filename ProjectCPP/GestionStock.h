#pragma once
#include "Strategy.h"
#include <string>
ref class GestionStock :
    public Strategy
{
public:
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    int changement_tarif(void);

protected:
private:
    int prixHT;
    String^ reference;
    double TVA;
    int stock;
    String^ couleur;
    String^ nature;
};

