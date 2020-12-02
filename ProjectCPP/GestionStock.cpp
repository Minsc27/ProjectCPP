#include "GestionStock.h"
#include "Header.h"

GestionStock::GestionStock() : prixHT(), reference(), TVA(), stock(), couleur(), nature()
{
	IDstock++;
}

GestionStock::GestionStock(double _prixHT, String^ _reference, double _TVA, String^ _couleur, String^ _nature) : prixHT(_prixHT), reference(_reference), TVA(_TVA), couleur(_couleur), nature(_nature)
{
	IDstock++;
}

GestionStock::GestionStock(double _prixHT, String^ _reference, double _TVA, String^ _couleur, String^ _nature, int _IDstock) : prixHT(_prixHT), reference(_reference), TVA(_TVA), couleur(_couleur), nature(_nature), IDstock1(_IDstock)
{
}

void GestionStock::creer(void)
{
	try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into article values(" + IDstock + ",'" + prixHT + "','" + reference + "','" + TVA + "','" + couleur + "','" + nature + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionStock::modifier(void)
{
	/*try
	{
		String^ Constring = "Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update article set PRIXHT_S='" + 12 + "',REFERENCE_S='" + reference + "',TVA_S='" + 20 + "',COULEUR_S='" + couleur + "',NATURE_S='" + nature + "' WHERE IDstock=" + IDstock1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e){}*/
}

void GestionStock::supprimer(void)
{
	/*try {
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("delete from stock WHERE IDCLIENT = " + IDstock1, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}*/
}

void GestionStock::afficher(void)
{
}

int GestionStock::changement_tarif(void)
{
	return 0;
}

/*void GestionStock::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}*/
