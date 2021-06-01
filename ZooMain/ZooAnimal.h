//Name : Tasnim_Hossain
//ID:1912128042

#ifndef ZOOANIMAL_H_INCLUDED
#define ZOOANIMAL_H_INCLUDED

class ZooAnimal
 {
 private:
 char *name;
 int cageNumber;
 int weightDate;
 int weight;
 public:
 void Destroy (); // destroy function
 char* reptName ();
 int daysSinceLastWeighed (int today);
 };


#endif // ZOOANIMAL_H_INCLUDED
