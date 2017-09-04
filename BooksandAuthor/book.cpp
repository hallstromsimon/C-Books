/*
 * book.cpp
 *
 *  Created on: 4 sep. 2017
 *      Author: simonhallstrom
 */

#include <sstream>

#include "Book.h"

string Book::toString() {
	stringstream ss;
	ss<<"Book[name="<<name<<"," <<",price="<<price<<",qty="<<qty<<"]";
	return ss.str();
}
