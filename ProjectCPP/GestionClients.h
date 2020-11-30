#pragma once
#include "Strategy.h"

class adresse;

ref class GestionClients :
    public Strategy 
{
public:
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;

protected:
private:
    static int IDclient;
    String^ nom;
    String^ prenom;
    double date_naissance;

    adresse* adresse;
};

