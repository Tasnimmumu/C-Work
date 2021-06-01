#include <iostream>
#include "calculator.h"
#include "Calculator.cpp"
using namespace std;

int main()
{
    //classname objectname//
    Calculator <int> calc;//creating object of int datatype//

    int summation=calc.sum(2,4);

    cout << "the summation is: " << summation<< endl;

    int n1=2,n2=4;
    int sub_result=1;
    calc.subtraction(sub_result,n1,n2);

    cout<<n1<<n2<<endl;
    cout<<"the subtracted result is : "<<sub_result<<endl;

    int dev;
    calc.devide(dev);
    cout<<"the division result is : "<<dev<<endl;
    return 0;
}
