# include <iostream >
 using namespace std ;
int main ( )
{
// stackOne and stackTwo declaration and initialization ( no codes )

stackTwo . push ( stackOne . pop ( ) ) ;
stackTwo . push ( stackOne . pop ( ) ) ;
stackTwo . push ( stackOne . pop ( ) ) ;

 cout << stackTwo . Top ( ) ;
 }
