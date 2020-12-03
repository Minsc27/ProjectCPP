#pragma once
#include "Strategy.h"
#include "adresse.h"

ref class GestionPersonnel :
    public Strategy
{
public:
    GestionPersonnel();
    GestionPersonnel(String^, String^, String^, String^, String^, adresse^);
    GestionPersonnel(String^, String^, String^, String^, String^, int, adresse^);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    //void ConvertDate(String^);

protected:
private:
    adresse^ _adresse;

    static int IDpersonnel = 0;
    int IDpersonnel1;
    String^ nom;
    String^ prenom;

    String^ annee;
    String^ mois;
    String^ jour;
};