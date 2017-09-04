#include  <iostream>
#include "Author.h"
using namespace  std;

int  main() {
 Author codebook("Bjarne Stroustrup", "bjarne@stroustrup.com", 'm');
 Book cppProgramming( "The C++ For the Home Coder" , 420 );
 Book cppProgramming2( "The C++ For the Pro Coder",  599 );
 codebook.addBook(cppProgramming);
 codebook.addBook(cppProgramming2);



 cout  << codebook.toString() << endl;
 return 0 ;
}
