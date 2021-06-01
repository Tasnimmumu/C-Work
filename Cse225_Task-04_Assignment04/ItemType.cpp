#include ”ItemType.h”
// F i l e ItemType . h must be p r o vided by the u s e r o f t h i s c l a s s .
// ItemType . h must c o n t ai n the f o l l o w i n g d e f i n i t i o n s :
// MAX ITEMS: the maximum number o f i tem s on the l i s t
// ItemType : the d e f i n i t i o n o f the o b j e c t s on the l i s t
// Rela tionType : {LESS , GREATER, EQUAL}
// Member f u n c ti o n ComparedTo (ItemType item ) which r e t u r n s
// LESS , i f s e l f ”comes b e f o r e ” item
// GREATER, i f s e l f ”comes a f t e r ” item
// EQUAL, i f s e l f and item a r e the same
struct NodeType ;

class UnsortedType
{
public :
    UnsortedType ( ) ; // C o n s t r u c t o r
    ˜UnsortedType ( ) ; // D e s t r u c t o r
    void MakeEmpty ( ) ;
// Function : Returns the l i s t t o the empty s t a t e .
// Post : L i s t i s empty .
    bool IsFull ( ) const ;
// Function : Determines whether l i s t i s f u l l .
// Pre : L i s t has been i n i t i a l i z e d .
// Post : Function v al u e = ( l i s t i s f u l l )
    int GetLength ( ) const ;
// Function : Determines the number o f el em e n t s i n l i s t .
// Pre : L i s t has been i n i t i a l i z e d .
// Post : Function v al u e = number o f el em e n t s i n l i s t

    ItemType GetItem ( ItemType& item, bool& found );
// Function : R e t ri e v e s l i s t elemen t whose key matches item ' s key ( i f
// p r e s e n t ) .
// Pre : L i s t has been i n i t i a l i z e d .
// Key member o f item i s i n i t i a l i z e d .
// Post : I f t h e r e i s an elemen t someItem whose key matches
// item ' s key , then found = t r u e and someItem i s r e t u r n e d ;
// o t h e r wi s e found = f a l s e and item i s r e t u r n e d .
// L i s t i s unchanged .

    void PutItem ( ItemType item ) ;
// Function : Adds item t o l i s t .
// Pre : L i s t has been i n i t i a l i z e d .
// L i s t i s not f u l l .
// item i s not i n l i s t .
// Post : item i s i n l i s t .

    void DeleteItem ( ItemType item ) ;
// Function : D el e t e s the elemen t whose key matches item ' s key .
// Pre : L i s t has been i n i t i a l i z e d .
// Key member o f item i s i n i t i a l i z e d .
// One and onl y one elemen t i n l i s t has a key matching item ' s key .
// Post : No elemen t i n l i s t has a key matching item ' s key .

    void ResetList ( ) ;
// Function : I n i t i a l i z e s c u r r e n t p o s i t i o n f o r an i t e r a t i o n through the l i s t .
// Pre : L i s t has been i n i t i a l i z e d .
// Post : Current p o s i t i o n i s p r i o r t o l i s t .

    ItemType GetNextItem ( ) ;
// Function : Gets the nex t elemen t i n l i s t .
// Pre : L i s t has been i n i t i a l i z e d and has not been changed s i n c e l a s t c a l l .
// Current p o s i t i o n i s d e fi n e d .
// Element a t c u r r e n t p o s i t i o n i s not l a s t i n l i s t .
//
// Post : Current p o s i t i o n i s updated t o next p o s i t i o n .
// item i s a copy o f elemen t a t c u r r e n t p o s i t i o n .
private :
    NodeType*listData ;
    int length ;
    NodeType*currentPos ;

} ;
