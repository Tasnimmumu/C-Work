#include <iostream>
using namespace std;
#include "ItemType.h"
#include "unsorted.h"

int main()
{
	ItemType a;
	a.Initialize(5);
	a.Print(std::cout);

	return 0;
}
