#pragma once
class Strategy
{
public:
	virtual void creer(void) = 0;
	virtual void modifier(void) = 0;
	virtual void supprimer(void) = 0;
	virtual void afficher(void) = 0;

protected:
private:
};

