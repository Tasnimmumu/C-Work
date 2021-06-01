#include <iostream>

using namespace std;

int main()
{
    int num1=5;
    int num2=8;   //create on stack//
    int *p;
    p=&num1;//store the address of num1 into P//
    *p=10;
    cout<<"Line1: &num1 = "<<num1<<"p = "<<p<<endl;
    cout<<"Line2: num1 = "<<num1<<"*p = "<<*p<<endl<<endl;

    p=&num2;
    cout<<"Line3: &num2 = "<<num2<<"p = "<<p<<endl;
    cout<<"Line4: num2 = "<<num2<<"*p = "<<*p<<endl<<endl;

    *p=2*(*p);
     cout<<"Line5: num2 = "<<num2<<"*p = "<<*p<<endl;

    return 0;
}
