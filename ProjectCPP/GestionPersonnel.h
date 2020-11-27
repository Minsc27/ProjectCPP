#pragma once
#include "Strategy.h"
ref class GestionPersonnel :
    public Strategy
{
public:
    void creer(void);
    void modifier(void);
    void supprimer(void);
    void afficher(void);

protected:
private:
    String nom;
    String prenom;
    double date_embauche;
};