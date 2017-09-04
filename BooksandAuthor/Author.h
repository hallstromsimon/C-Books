/*
 * Author.h
 *
 *  Created on: 4 sep. 2017
 *      Author: simonhallstrom
 */

#include <string>
#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

class Author {
public:
	 Author(string n, string  e, char  g ):name(n), email(e), gender(g) {};

	 void addBook( Book &book){books.push_back(book);}

	 string toString();
private:
	 vector<Book> books;
	 std::string name;
	 std::string email;
	 char gender;
};
