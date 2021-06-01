#include<iostream>
using namespace std;
class Car{
public:

    int year;
    string brand;
    string model;

};
int main(){
    Car myobj1;
    myobj1.year = 2000;
    myobj1.brand = "BMW";
    myobj1.model = "X7";

    cout<< myobj1.year<<endl;
    cout<< myobj1.brand<<endl;
    cout<< myobj1.model<<endl;

    Car myobj2;
    myobj2.year = 2017;
    myobj2.brand = "Ford";
    myobj2.model = "X10";

    cout<< myobj2.year<<endl;
    cout<< myobj2.brand<<endl;
    cout<< myobj2.model<<endl;


    return 0;

}
