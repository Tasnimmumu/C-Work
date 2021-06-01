#include <iostream>
using namespace std ;
template <typename ItemType>
class Sort
{
    ItemType arr [ 5 0 ] ;
    int n ;

public :
    void user Input ( ) ;
    void fixed Input ( ) ;
    void bubble ( ) ;
    void insertion ( ) ;
    void selection ( ) ;
    void display ( ) ;
} ;

template <typename ItemType>
void Sort<ItemType >:: user Input ( )
{
cout<<”Enter size of elements :
        ” << endl ;
    cin>>n ;

    cout<<”Enter ” << n << ” values ” << endl ;
    for ( int b = 0 ; b <= n −1; b++)
    {
cout << ”Value [ ” << b << ” ] :
             ” ;
        cin>>arr [ b ] ;
    }

cout << ”Elements of your unsorted list :
         [ ” ;
               for ( int c = 0 ; c <= n −1; c++)
        {
            cout << arr [ c ] << ” ” ;
        }
        cout << ” ] ” << endl ;
}

template <typename ItemType>
void Sort<ItemType >:: fixed Input ( )
{
    n=4;
    arr [ 0 ] = 4.3 ;
    arr [ 1 ] = 2.2 ;
    arr [ 2 ] = 1.6 ;
    arr [ 3 ] = 3.2 ;
}

template <typename ItemType>
void Sort<ItemType >:: bubble ( )
{
    for ( int i =1; i<n; ++ i )
    {
        for ( int j =0; j <(n−i ); ++ j )
        {
            if ( arr [ j ]> arr [ j +1])
            {
                ItemType temp=arr [ j ] ;
                arr [ j ]= arr [ j + 1];
                arr [ j +1]=temp ;
            }
        }
    }
}

template <typename ItemType>
void Sort<ItemType >:: insertion ( )
{
    for ( int i =1; i<n ; i++)
    {
        ItemType temp=arr [ i ] ;
        int j=i −1;

        while ( ( temp<arr [ j ] ) && ( j >=0) )
        {
            arr [ j +1]= arr [ j ] ; //moves elemen t f o rw a rd
            j=j −1;
        }

        arr [ j +1]=temp ; // i n s e r t elemen t i n p r ope r pl a c e
    }
}

template <typename ItemType>
void Sort<ItemType >:: selection ( )
{
    for ( int i = 0 ; i < n−1; i++)
    {

        int indexMin = i ;

        for ( int j = i +1; j < n ; j++)
        {
            if ( arr [ j ] < arr [ indexMin ] )
            {
                indexMin = j ;
            }
        }
        if ( indexMin != i )
        {
// swap the numbers
            ItemType temp = arr [ indexMin ] ;
            arr [ indexMin ] = arr [ i ] ;
            arr [ i ] = temp ;
        }

    }
}

template <typename ItemType>
void Sort<ItemType >:: display ( )
{
cout << ”Elements of your sorted list :
         [ ” ;
               for ( int x = 0 ; x < n ; x++)
        {
            cout << arr [ x ] << ” ” ;
        }
        cout << ” ] ” ;
}

int main ( )
{
    Sort<float > mSort ;
    mSort . fixed Input ( ) ;
    mSort . bubble ( ) ;
//mSort . i n s e r t i o n ( ) ;
//mSort . s e l e c t i o n ( ) ;

    mSort . display ( ) ;
    return 0 ;
}
