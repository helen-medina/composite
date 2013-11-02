#include <string>
#include "Mercancia.h"
#include <list>

class Compuesto: public Mercancia{

private:
	list <Mercancia *>mylist;

public:
	Compuesto(unsigned long long code_s, string name_s, double price_s=0.0):Mercancia(code_s, name_s,price_s){

	};

	virtual bool Add(Mercancia *m);
	virtual bool Remove(Mercancia *m);	
	int num_p();
	void search_f(Mercancia *m);
	/* Calculate the total price of all articles contented in the compuesto object*/
	double price_total();
	//bool condition(Mercancia *m);


};
