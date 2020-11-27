#pragma once
#include "Strategy.h"
#include <string>
class GestionStock :
    public Strategy
{
public:
    void creer(void);
    void modifier(void);
    void supprimer(void);
    void afficher(void);
    int changement_tarif(void);

protected:
private:
    int prixHT;
    std::string reference;
    double TVA;
    int stock;
    std::string couleur;
    std::string nature;
};

