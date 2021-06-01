#include <iostream>

using namespace std;

class Car{
public:
    int speed(int maxspeed);

};
int Car::speed(int maxspeed){

            return maxspeed;
}

int main()
{
    Car myobj;
    cout<< myobj.speed(2000)<<endl;
    return 0;
}
