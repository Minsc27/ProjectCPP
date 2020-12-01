#pragma once
#include <exception>
//#include "MyForm.h"
using namespace System;

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

