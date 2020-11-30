#pragma once
#include "Strategy.h"
ref class GestionStatistiques :
    public Strategy
{
public:
    void calculPanier(void);
    void calculChiffre(void);
    void calculMontantAchat(void);
    void calculValeurStock(void);
    void calculAchatStock(void);
    void IDPlusVendu(void);
    void IDMoinsVendu(void);
    void IDSousSeuil(void);
    void Simulation(void);

protected:
private:

};

