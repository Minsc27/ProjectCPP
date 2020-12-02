#include "GestionClients.h"
#include "Header.h"


//int GestionClients::IDclient = 0;

GestionClients::GestionClients() : nom(), prenom(), annee(),mois(),jour()
{
	IDclient++;
}

GestionClients::GestionClients(String^ _nom, String^ _prenom,String^ _annee,String^ _mois, String^ _jour) : nom(_nom),prenom(_prenom), annee(_annee), mois(_mois), jour(_jour)
{
	IDclient++;
}

//using namespace ProjectCPP;
void GestionClients::creer(void)
{
	try{
		String^ Constring = L"Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("insert into client values(" + IDclient + ",'" + nom + "','" + prenom + "','" + annee + "-" + mois + "-" + jour + "','" + "2002" + "-" + "02" + "-" + "04" + "')", ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();
		ConnectDB->Close();
	}
	catch (exception e) {}
}

void GestionClients::modifier(void)
{
	try
	{
		String^ Constring = "Server=127.0.0.1;user=root;password=Password123;Database=ProjetBDD";
		MySqlConnection^ ConnectDB = gcnew MySqlConnection(Constring);

		MySqlCommand^ Adapt1 = gcnew MySqlCommand("update matable nom='" + nom + "',prenom='" + prenom + "',annee='" + annee + "',mois='" + mois + "' ,jour='" + jour + "' WHERE id=" + id, ConnectDB);
		MySqlDataReader^ DR;
		ConnectDB->Open();
		DR = Adapt1->ExecuteReader();

		ConnectDB->Close();

		MessageBox::Show("Informations mises à jour");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

void GestionClients::supprimer(void)
{
}

void GestionClients::afficher(void)
{
}

int GestionClients::GetIDclient(void)
{
	return IDclient;
}

/*void GestionClients::ConvertDate(String^ _date)
{
	for (int i = 0; i < 4; i++) {
		annee += _date[i];
	}
	for (int i = 5; i < 7; i++) {
		mois += _date[i];
		jour += _date[i + 3];
	}
}*/
