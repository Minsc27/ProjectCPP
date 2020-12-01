#pragma once
#include "Strategy.h"

ref class GestionPersonnel :
    public Strategy
{
public:
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    void ConvertDate(String^);

protected:
private:
    String^ nom;
    String^ prenom;
    String^ date_embauche;

    String^ annee;
    String^ mois;
    String^ jour;
};