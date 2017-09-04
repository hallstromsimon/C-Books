/*
 * book.h
 *
 *  Created on: 4 sep. 2017
 *      Author: simonhallstrom
 */

#include <string>
#include <iostream>

using namespace std;


class Book {
public:
	Book(string name, double price,int qty=0 ):
		name(name), price(price), qty(qty) {};
	string toString();
private:
	string name;
	double price;
	int qty;
	char gender;
};
