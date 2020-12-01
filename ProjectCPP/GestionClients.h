#pragma once
#include "Strategy.h"
#include "adresse.h"

ref class GestionClients :
    public Strategy 
{
public:
    GestionClients();
    GestionClients(String^, String^,String^);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    static int GetIDclient(void);

protected:
private:
    static int IDclient = 0;
    String^ nom;
    String^ prenom;
    String^ date_naissance;

    adresse* adresse;
};