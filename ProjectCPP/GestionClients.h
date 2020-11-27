#pragma once
#include "Strategy.h"
ref class GestionClients :
    public Strategy
{
public:
    void creer(void);
    void modifier(void);
    void supprimer(void);
    void afficher(void);

protected:
private:
    static int IDclient;
    String nom;
    String prenom;
    double date_naissance;
};

