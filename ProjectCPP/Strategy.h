#pragma once
//#include "MyForm.h"
using namespace System;
#include <exception>;

ref class Strategy abstract
{
public:
	virtual void creer(void) abstract;
	virtual void modifier(void) abstract;
	virtual void supprimer(void) abstract;
	virtual void afficher(void) abstract;

protected:
private:
};

