#pragma once
#include "Strategy.h"
#include <string>
class GestionPersonnel :
    public Strategy
{
public:
    void creer(void);
    void modifier(void);
    void supprimer(void);
    void afficher(void);

protected:
private:
    std::string nom;
    std::string prenom;
    double date_embauche;
};