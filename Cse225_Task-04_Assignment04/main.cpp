#include <iostream>
using namespace std;
#include "ItemType.h"
#include "unsorted.h"

int main()
{
  UnsortedType list1;

  ItemType item1;
  item1.setValue(4);
  list1.InsertItem(item1);

  ItemType item2;
  item2.setValue(7);
  list2.InsertItem(item2);

  list1.ResetList();

  ItemType i;
  i.setValue(10);
  bool result;
  list1.GetItem(i,result);
  cout << result;

  ItemType i;
  j.setValue(4);
  list1.DeleteItem(i);

}
