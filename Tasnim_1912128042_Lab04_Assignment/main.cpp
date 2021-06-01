#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    unsortedtype <int> u;
    u.InsertItem(5);
     u.InsertItem(7);
      u.InsertItem(6);
       u.InsertItem(9);

       //Printing the list
       int a;
       for(int i=0;i<u.LengthIs();i++){
       u.GetNextItem (a);
       cout<<a<<" ";
       }
