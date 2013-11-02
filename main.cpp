#include <iostream>
#include <algorithm>
#include "Compuesto.h"
#include "Pieza.h"
#include "store.h"
//global variable

static long cantidad;

int main()
{

	double precio;
	store obj;
	obj.insert_store("cup", 001, 2.5);
	obj.insert_store("cup", 002,2.5);
	obj.insert_store("cup", 003,2.5);
	obj.insert_store("sugar bowl", 004, 5.0);
	obj.insert_store("teapot", 010, 20.0);
	obj.insert_store("spoon", 005, 1.0);
	obj.insert_store("spoon", 006,1.0);
	obj.insert_store("plato", 007, 5.0);
	obj.insert_store("spoon", 006, 1.0);
	//vajilla consta de dos tazas y sugar bowl y se lleva teapot (hoja)
obj.list_article();


	//compra
	precio=obj.get_price_store(001);
	Mercancia *cup=new Pieza(001, "cup", precio);

	precio=obj.get_price_store(002);
	Mercancia *cup_2=new Pieza(002, "cup", precio);

	precio=obj.get_price_store(010);
	Mercancia *teapot=new Pieza(010, "teapot", precio);

	Compuesto vajilla (004, "vajilla");
	vajilla.Add(cup);
	vajilla.Add(cup_2);
	vajilla.Add(teapot);
	cout << "El precio total es: " << vajilla.price_total() << endl;

	obj.delete_store(001);
	obj.delete_store(002);
	obj.delete_store(010);
	obj.list_article();

/*
	

	Mercancia *cup=new Pieza(001, "cup", 2.5);
	Mercancia *teapot=new Pieza(001, "teapot", 10.0);

	Compuesto vajilla (004, "vajilla");
	vajilla.Add(cup);
	vajilla.Add(cup);
	vajilla.Add(teapot);
	double precio=vajilla.price_total();
	obj.send_article("cup");
	obj.send_article("cup");
	obj.send_article("teapot");
	cout << "El precio total es: " << precio << endl;
	obj.list_article();
	obj.send_article("plate");
*/

	return 0;
}


/*
//Prueba iterator lista de objetos Compuesto
list <Compuesto>mylist;
Compuesto m(001, "m_1", 5.0);
Compuesto m_2(002, "m_2", 5.6);

mylist.push_back(m);
mylist.push_back(m_2);
std::list<Compuesto>::iterator i;

i = std::find_if( mylist.begin(), mylist.end(), [](Compuesto x){return x.get_code()==001;});
	
std::cout << i->get_name() << std::endl;
std::cout << (*i).get_name() << std::endl;


//Prueba iterator lista de punteros Compuesto
list <Compuesto*>mylist_p;
Compuesto *p =new Compuesto(001, "p_1", 5.0);
Compuesto *p_2 =new Compuesto(002, "p_2", 5.6);

mylist_p.push_back(p);
mylist_p.push_back(p_2);
std::list<Compuesto*>::iterator itr;

itr = std::find_if( mylist_p.begin(), mylist_p.end(), [](Compuesto *x){return x->get_code()==001;});
	
std::cout << (**itr).get_name() << std::endl;
std::cout << (*itr)->get_name() << std::endl;



//Prueba iterator lista de punteros Mercancia
list <Mercancia*>mylist_h;
Mercancia *hijo =new Compuesto(001, "Este es mi hijo", 5.0);
Mercancia *hijo_2 =new Compuesto(002, "p_2", 5.6);

mylist_h.push_back(hijo);
mylist_h.push_back(hijo_2);
std::list<Mercancia*>::iterator itr_h;

itr_h = std::find_if( mylist_h.begin(), mylist_h.end(), [](Mercancia *x){return x->get_code()==001;});
	
std::cout << (**itr_h).get_name() << std::endl;
std::cout << (*itr_h)->get_name() << std::endl;

*/
