#include <iostream>
using namespace s t d ;

int main ( )
{
int *p ;
int *q ;

p = new int ;

*p = 34;

cout << ”Line 1 : p = ” << p << ” , *p=” << *p << endl << endl ;

q = p ;

cout << ”Line 2 : q = ” << q << ” , *q=” << *q << endl << endl ;

*q = 45;

cout << ”Line 3 : p = ” << p << ” , *p=” << *p << endl ;
cout << ”Line 4 : q = ” << q << ” , *q=” << *q << endl << endl ;

p = new int ;

*p = 18;

cout << ”Line 5 : p = ” << p << ” , *p=” << *p << endl ;
cout << ”Line 6 : q = ” << q << ” , *q=” << *q << endl << endl ;

 delete q ;

 q = null;

 q = new int ;

 *q = 62;

cout << ”Line 7 : p = ” << p << ” ,*p=” << *p <<endl ;
cout << ”Line 8 : q = ” << q << ” , *q=” << *q <<endl << endl ;

 delete p ;
 delete q ;

return 0 ;
}
