// The f o l l o w i n g d e c l a r a t i o n s and d e f i n i t i o n s go i n t o f i l e

#include <fstream>
const int MAX ITEMS = 5 ;
enum Rela tionType {LESS , GREATER, EQUAL} ;

class ItemType
 {
public:
ItemType ( ) ;
Rela tionType ComparedTo ( ItemType ) const ;
void Print ( std : : ostream&) const ;
void Initialize ( int number ) ;
private :
int value ;
 } ;
// The f o l l o w i n g d e f i n i t i o n s go i n t o f i l e ItemType . cpp . #i n cl u d e <f s t re am>


#include <iostream>
#include ”ItemType.h”

ItemType : : ItemType ( )
{
value = 0 ;
}
RelationType ItemType : : ComparedTo ( ItemType otherItem ) const
{
 if ( value < otherItem.value )
return LESS ;
 else i f ( v al u e > o the r I tem . v al u e )
 return GREATER;
 else return EQUAL;
 }
 void ItemType : : Initialize ( int number )
 {
 value = number ;
 }

void ItemType : : Print ( std : : ostream& out ) const
// p re : out has been opened .
// p o s t : v al u e has been s e n t t o the stream out .
{
     out << value ;
 }
