#include <string>
#include <algorithm>
#include <utility>
#include <iostream>
#include <unordered_map>
#include "global.h"

using namespace std;




class store{

private:

	
	list< pair <string,long > > article; 
	list< pair <string,long > >::iterator it;
	unordered_map<unsigned long long,mys> mystore;

public:
	void insert_article(string name);
	void insert_store(string name, unsigned long long code,double price_s);
	void delete_store(unsigned long long code);
	double get_price_store(unsigned long long code);
	long get_total(string name);

	bool f_article (string name);

	void send_article (string name);
	void list_article();


};




