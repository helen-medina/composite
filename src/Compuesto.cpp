#include <string>
#include <iostream>
#include "Compuesto.h"
#include <list>
#include <algorithm>


bool Compuesto::Add(Mercancia *m){
	mylist.push_back(m);
	return 0;
}
bool Compuesto::Remove(Mercancia *m){
	mylist.remove(m);
	return 0;
}

int Compuesto::num_p(){
	return mylist.size();
}

void Compuesto::search_f(Mercancia *m){
	std::list<Mercancia*>::iterator i;

	i = std::find_if( mylist.begin(), mylist.end(), [](Mercancia *x){return x->get_code()==001;});

	if (i!=mylist.end()){
		//std::cout << "producto" << *i << std::endl;
		std::cout << "Encontrado " << std::endl;
		std::cout << "code " << (**i).get_code() << std::endl;
		std::cout << "name " << (**i).get_name() << std::endl;
		std::cout << "precio " << (**i).get_price() << std::endl;
	}

	else 
		std::cout << "no encontrado" << std::endl;
}

double Compuesto::price_total(){
	double total=0.0;
	for (std::list<Mercancia*>::iterator i=mylist.begin();i!=mylist.end();i++){
		total +=(**i).get_price();
		}
	return total;

}


