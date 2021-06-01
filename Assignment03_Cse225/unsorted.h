#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED

// Implemen ta tion f i l e f o r Unsorted . h

#include ” unsorted.h”

UnsortedType : : UnsortedType ( )
 {
     length = 0 ;
}
bool UnsortedType : : IsFull ( ) const
 {
return ( length == MAX ITEMS) ;
}
int UnsortedType : : GetLength ( ) const
 {
return length ;
}

ItemType UnsortedType : : GetItem ( ItemType item , bool& found )
// Pre : Key member ( s ) o f item i s i n i t i a l i z e d .
// Post : I f found , item ' s key matches an elemen t ' s key i n the
 // l i s t and a copy o f t h a t elemen t has been r e t u r n e d ;
 // o t h e rwi s e , item i s r e t u r n e d .
 {
 bool moreToSearch ;
int location = 0 ;
found = false ;

moreToSearch = ( location < length ) ;

 while ( moreToSearch && ! found )
 {
switch ( item . ComparedTo ( info [ location ]))
}
case LESS :
case GREATER : location ++;
moreToSearch = ( location < length ) ;
break ;
case EQUAL : found = true ;
item = info [ location ] ;
 break ;
}
}
return item ;
}
 void UnsortedType : : MakeEmpty ( )
 // Post : l i s t i s empty .
 {
length = 0 ;
}
void UnsortedType : : PutItem ( ItemType item )
// Post : item i s i n the l i s t .
{
info [ length ] = item ;
length++;
}
void UnsortedType : : DeleteItem ( ItemType item )
 // Pre : item ' s key has been i n i t i a l i z e d .
 // An elemen t i n the l i s t has a key t h a t matches item ' s .
// Post : No elemen t i n the l i s t has a key t h a t matches item ' s .
 {
int location = 0 ;

while ( item . ComparedTo ( info [ location ] ) != EQUAL)
location ++;

info [ location ] = info [ length − 1 ] ;
 length −−;
 }
 void UnsortedType : : ResetList ( )
 // Post : c u r r e n tP o s has been i n i t i a l i z e d .
{
 currentPos = − 1}

 ItemType UnsortedType : : GetNextItem ( )
 // Pre : R e s e t Li s t was c a l l e d t o i n i t i a l i z e d i t e r a t i o n .
 // No t r a n s f o rm e r has been e xe cu ted s i n c e l a s t c a l l .
 // c u r r e n tP o s i s d e fi n e d .
 // Post : item i s c u r r e n t item .
 // Current p o s i t i o n has been updated .
 {
 currentPos++;
 return ino [ currentPos ] ;
 }

#endif // UNSORTED_H_INCLUDED
