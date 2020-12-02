#pragma once
#include "Strategy.h"
#include "adresse.h"

ref class GestionClients :
    public Strategy 
{
public:
    GestionClients();
    GestionClients(String^, String^,String^,String^,String^);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    static int GetIDclient(void);
    //void ConvertDate(String^);

protected:
private:
    static int IDclient = 0;
    String^ nom;
    String^ prenom;

    String^ annee;
    String^ mois;
    String^ jour;

    adresse* adresse;

    String^ rue_livraison;
    String^ rue_facturation;
    String^ ville_livraison;
    String^ ville_facturation;
    int code_postal_livraison;
    int code_postal_facturation;
};

