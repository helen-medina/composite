
//class Mercancia

#ifndef MERCANCIA_H
#define MERCANCIA_H

#include <string>
using namespace std;
class Mercancia{
	
	protected:
		unsigned long long code;
		string name;
		double price;

	public:

		Mercancia(unsigned long long code_s, string name_s, double price_s);
		virtual void set_code (unsigned long long code);
		virtual void set_name (string name);
		virtual void set_price (double price);
		virtual unsigned long long get_code ();
		virtual string get_name();
		virtual double get_price();
		virtual bool Add(Mercancia *m) =0;
		virtual bool Remove(Mercancia *m)=0;
		virtual ~Mercancia(){};
			
		
};

#endif
