#pragma once
#include "Strategy.h"
#include <string>

ref class GestionStock :
    public Strategy
{
public:
    GestionStock();
    GestionStock(double, String^, double, int, String^, String^);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    int changement_tarif(void);
    //void ConvertDate(String^);

protected:
private:
    static int IDstock = 0;
    double prixHT;
    String^ reference;
    double TVA;
    int stock;
    String^ couleur;
    String^ nature;
};

