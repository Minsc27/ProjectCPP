#pragma once
#include "Strategy.h"
#include <string>

ref class GestionStock :
    public Strategy
{
public:
    GestionStock();
    GestionStock(String^, String^, String^, String^, String^);
    GestionStock(String^, String^, String^, String^, String^, int);
    void creer(void) override;
    void modifier(void) override;
    void supprimer(void) override;
    void afficher(void) override;
    int changement_tarif(void);
    int getIDstock(void) { return IDstock1; }
    //void ConvertDate(String^);

protected:
private:
    static int IDstock = 0;
    int IDstock1;
    String^ prixHT;
    String^ reference;
    String^ TVA;
    int stock;
    String^ couleur;
    String^ nature;
};

