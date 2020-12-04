#include "quantite.h"

quantite::quantite() : quantite_article()
{
	IDquantite++;
}

quantite::quantite(int _quantite_article) : quantite_article(_quantite_article)
{
	IDquantite++;
}
