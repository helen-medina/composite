

#include <iostream>
#include <string>
#include "Mercancia.h"


using namespace std;
//I use unsigned long variables for code unsigned long long: 0 to 18446744073709551615 
Mercancia::Mercancia(unsigned long long code_s, string name_s, double price_s=0.0){
	code = code_s;
	name = name_s;
	price = price_s;
}
 void Mercancia::set_code (unsigned long long code_s){
	this->code = code_s;
}
 void Mercancia::set_name (string name_s){
	this->name=name_s;
}
 void Mercancia::set_price (double price_s){
	this->price = price_s ;
}
 unsigned long long Mercancia::get_code (){
	return code;
}
 string Mercancia::get_name(){
	return name;
}
 double Mercancia::get_price(){
	return price;

}

