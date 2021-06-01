#include <iostream>

using namespace std;

class Car{
 public:
     string brand;
     string model;
     int year;

    Car(string x, string y, int z);

};
Car::Car(string x, string y, int z){
       brand = x;
       model = y;
       year = z;
    }

int main()
{
    Car myobj1("BMW","XY5",2010);
    Car myobj2("Ford","SD3",2015);
    cout<<myobj1.brand<< " " <<myobj1.model<< " " <<myobj1.year<<endl;
    cout<<myobj2.brand<< " " <<myobj2.model<< " " <<myobj2.year<<endl;

    return 0;
}
