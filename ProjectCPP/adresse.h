#pragma once

class GestionPersonnel;
class GestionClients;

ref class adresse
{
public:
	GestionPersonnel** gestionPersonnel;
	GestionClients** gestionClients;

protected:
private:
	int rue;
	int code_postal;
	int ville;
};

