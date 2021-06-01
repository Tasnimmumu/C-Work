#include <iostream>

using namespace std;

class Car{
 public:
     string brand;
     string model;
     int price;
    Car(string x, string y, int z){
       brand = x;
       model = y;
       price = z;
    }

};

int main()
{
    Car myobj1("BMW","XY5",1200000);
    Car myobj2("Ford","SD3",2388679);
    cout<<myobj1.brand<< " " <<myobj1.model<< " " <<myobj1.price<<endl;
    cout<<myobj2.brand<< " " <<myobj2.model<< " " <<myobj2.price<<endl;

    return 0;
}
