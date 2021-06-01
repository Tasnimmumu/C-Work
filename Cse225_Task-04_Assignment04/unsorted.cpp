// This f i l e c o n t ai n s the li n k e d implemen t a ti on o f c l a s s
// UnsortedType .
#include ”unsorted.h”
struct NodeType
{
    ItemType info ;
    NodeType* next ;
} ;

UnsortedType : :
UnsortedType ( ) // Cl a s s c o n s t r u c t o r
{
    length = 0 ;
    listData = NULL;
}
bool UnsortedType : :
IsFull ( ) const
// Returns t r u e i f t h e r e i s no room f o r an o the r ItemType
// on the f r e e s t o r e ; f a l s e o t h e r wi s e .
{
    NodeType* location ;
    try
    {
        location = new NodeType ;
        delete location ;
        return false ;
    }
    catch ( std : : bad_alloc exception )
    {
        return true ;
    }
}

int UnsortedType : :
GetLength ( ) const
// Post : Number o f i tem s i n the l i s t i s r e t u r n e d .
{
    return length ;

}
void UnsortedType : :
MakeEmpty ( )
// Post : L i s t i s empty ; a l l i tem s have been d e a l l o c a t e d .
{
    NodeType* tempPtr ;

    while ( listData != NULL)
    {
        tempPtr = listData ;
        listData = listData −>next ;
        delete tempPtr ;
    }
    length = 0 ;
}
void UnsortedType : :
PutItem ( ItemType item )
// item i s i n the l i s t ; l e n g t h has been inc remen ted .
{
    NodeType* location ; // D e cl a r e a p oi n t e r t o a node

    location = new NodeType ; // Get a new node
    location −>info = item ; // S t o r e the item i n the node
    location −>next = l i s t D a t a ; // S t o r e a d d r e s s o f f i r s t node
// i n nex t f i e l d o f new node
    listData = location ; // S t o r e a d d r e s s o f new node i n t o
// e x t e r n a l p oi n t e r
    length++; // Inc remen t l e n g t h o f the l i s t
}

ItemType UnsortedType : :
GetItem ( ItemType& item, bool& found )
// Pre : Key member ( s ) o f item i s i n i t i a l i z e d .
// Post : I f found , item ' s key matches an elemen t ' s key i n the
// l i s t and a copy o f t h a t elemen t has been s t o r e d i n item ;
// o t h e rwi s e , item i s unchanged .
{
    bool moreToSearch ;
    NodeType* location ;

    location = listData ;
    found = false ;
    moreToSearch = ( location != NULL) ;

    while ( moreToSearch && ! found )
    {
        switch ( item . ComparedTo ( location −>info ) )
        {
        case LESS :
        case GREATER :
            location = location −>next ;
            moreToSearch = ( location != NULL) ;
            break ;
        case EQUAL :
            found = true ;
            item = location −>info ;
            break ;
        }
    }
    return item ;
}
void UnsortedType : :
DeleteItem ( ItemType item )
// Pre : item ' s key has been i n i t i a l i z e d .
// An elemen t i n the l i s t has a key t h a t matches item ' s .
// Post : No elemen t i n the l i s t has a key t h a t matches item ' s .
{
    NodeType* location = listData ;
    NodeType* tempLocation ;

// Loca te node t o be d el e t e d .
    if ( item . ComparedTo ( listData −>info ) == EQUAL)
    {
        tempLocation = location ;
        listData = listData −>next ; // D el e t e f i r s t node .
    }
    else
    {
        while ( item . ComparedTo ( ( location −>next )−>info ) != EQUAL)
            l o c a t i o n = l o c a ti o n −>next ;

// D el e t e node a t l o c a ti o n −>nex t
        tempLocation = location −>next ;
        location −>nex t = ( location −>next )−>next ;
    }
    delete tempLocation ;
    length −−;
}

void UnsortedType : :
ResetList ( )
// Post : Current p o s i t i o n has been i n i t i a l i z e d .
{
    currentPos = NULL;
}

ItemType UnsortedType : :
GetNextItem ( )
// Post : A copy o f the next item i n the l i s t i s r e t u r n e d .
// When the end o f the l i s t i s reached , c u r r e n tP o s
// i s r e s e t t o b e gin a g ain .
{
    ItemType item ;
    if ( currentPos == NULL)
        currentPos = listData ;
    else
        currentPos = currentPos−>next ;
    item = currentPos−>info ;
    return item ;
}

UnsortedType : :
˜ UnsortedType ( )
// Post : L i s t i s empty ; a l l i tem s have been d e a l l o c a t e d .
{
    NodeType* tempPtr ;

    while ( listData != NULL)
    {
        tempPtr = listData ;
        listData = listData −>next ;
        delete tempPtr ;
    }
}

