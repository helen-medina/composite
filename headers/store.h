

#include <string>
#include <algorithm>
#include <utility>
#include <iostream>
#include <unordered_map>
#include "global.h"

using namespace std;


class store{

private:

	// Containers
	/* Stores the name and the total quantity per article */
	list< pair <string,long > > article; 

	list< pair <string,long > >::iterator it;

	/* Stores the code (map's key) and the mys struct. This struct contains both its name and its price */
	unordered_map<unsigned long long,mys> mystore;

public:

	/* Insert article in the store and calls insert_article method */
	void insert_store(string name, unsigned long long code,double price_s);

	/* Insert article in the article list and increments the article's amount */
	void insert_article(string name);

	/* Delete the article from the store and calls send_article method */
	void delete_store(unsigned long long code);

	/* Decrement the article's quantity of the list */
	void send_article (string name);
		
	/* Gets the article's price from the article's code*/
	double get_price_store(unsigned long long code);

	/* Gets the total number of articles*/
	long get_total(string name);

	/* Find an article*/
	bool f_article (string name);

	/* Print out the articles from the store*/
	void list_article();


};




