//Name : Tasnim_Hossain
//ID:1912128042

#include"ZooAnimal.h"
#include <string>
#include<iostream>
void ZooAnimal::Destroy ()
 {
 delete [] name;
 }

 char* ZooAnimal::reptName ()
 {
 return name;
 }

 {
 int Friday, day;
 day = today/50*30 + today - today/50*50;
 Friday = weightDate/50*30 + weightDate - weightDate/50*50;
 if (day < Friday)
 day = day + 360;
 return (day-Friday);
 }
