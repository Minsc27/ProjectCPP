#pragma once
#include "Strategy.h"
#include <string>
class GestionClients :
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
    std::string nom;
    std::string prenom;
    double date_naissance;
};

