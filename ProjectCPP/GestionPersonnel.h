#pragma once
#include "Strategy.h"

ref class GestionPersonnel :
    public Strategy
{
public:
    GestionPersonnel();
    GestionPersonnel(String^, String^, String^);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;

protected:
private:
    static int IDpersonnel = 0;
    String^ nom;
    String^ prenom;
    String^ date_embauche;

    String^ annee;
    String^ mois;
    String^ jour;
};