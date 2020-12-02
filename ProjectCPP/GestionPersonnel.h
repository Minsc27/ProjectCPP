#pragma once
#include "Strategy.h"

ref class GestionPersonnel :
    public Strategy
{
public:
    GestionPersonnel();
    GestionPersonnel(String^, String^, String^, String^, String^);
    GestionPersonnel(String^, String^, String^, String^, String^, int);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    static int GetIDpersonnel(void);
    //void ConvertDate(String^);

protected:
private:
    static int IDpersonnel = 0;
    int IDpersonnel1;
    String^ nom;
    String^ prenom;

    String^ annee;
    String^ mois;
    String^ jour;
};