//Name : Tasnim_Hossain
//ID:1912128042

#include"ZooAnimal.h"
#include <iostream>
using namespace std;

void main()
{
    {
 ZooAnimal Tiger;
 Tiger.Create ("Tiger", 200, 1020, 300);
 cout << "This animal's name is " << Tiger.name << endl;
 Tiger.Destroy ();
}
