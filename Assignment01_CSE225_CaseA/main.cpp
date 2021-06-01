 #include <iostream>
 using namespace std ;

 int main ( )
 {
 int num1 = 5 ;
 int num2 = 8 ;
 int *p ;

 p = &num1 ;

 *p = 10;

 cout << endl ;
 cout << ”Line 1 : &num1 = ” << &num1 << ” , p = ” << p << endl ;
 cout << ”Line 2 : num1 = ” << num1 << ” , *p = ” << *p << endl << endl ;

 p = &num2 ;
 cout << ”Line 3 : &num2 = ” << &num2 << ” , p = ” << p <<endl ;
 cout << ”Line 4 : num2 = ” << num2 << ” , *p = ” << *p <<endl << endl ;

 *p = 2 * (*p ) ;

 cout << ”Line 5 : num2 = ” << num2 << ” , *p = ” << *p << endl << endl ;

 return 0 ;
}
