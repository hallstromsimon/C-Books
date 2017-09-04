/*
 * Author.cpp
 *
 *  Created on: 4 sep. 2017
 *      Author: simonhallstrom
 */

#include<sstream>
#include<iostream>

#include"Author.h"

using namespace std;

string Author::toString()
{
	stringstream ss;

	ss<<"Author[name="<<name<<",email="<<email<<",gender="<<gender<<"]";
	for (int x = 0; x < books.size(); x++) {
    ss<<books[x].toString();
	}
	return ss.str();
	}
