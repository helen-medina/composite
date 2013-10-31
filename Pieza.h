#ifndef PIEZA_H
#define PIEZA_H

#include <string>
#include "Mercancia.h"

class Pieza: public Mercancia{


public:
	Pieza(unsigned long long code_s, string name_s, double price_s):Mercancia(code_s, name_s,price_s){

	};

	virtual bool Add(Mercancia *m);
	virtual bool Remove(Mercancia *m);	
	//virtual ~Pieza(){};


};
#endif
