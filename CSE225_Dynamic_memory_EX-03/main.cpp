#include <iostream>

using namespace std;

int main()
{
    int *p,*q; //create on stack//
    p=new int; //create on heap//
    *p =34;
    cout<< "Line1: p = "<< p << " , *p= "<<*p<<endl<<endl;
    p=q;
    cout<< "Line2: q = "<< q << " , *q= "<<*q<<endl;
    cout<< "Line3: p = "<< p << " , *p= "<<*p<<endl<<endl;

    *q=45;
    cout<< "Line4: p = "<< p << " , *p= "<<*p<<endl;
    cout<< "Line5: q = "<< q << " , *q= "<<*q<<endl<<endl;

    p=new int;
    *p=18;
    cout<< "Line6: p = "<< p << " , *p= "<<*p<<endl;
    cout<< "Line7: q = "<< q << " , *q= "<<*q<<endl<<endl;

    delete q;//deallocation//
    q=NULL;
    q=new int;
    *q=60;
    cout<< "Line8: p = "<< p << " , *p= "<<*p<<endl;
    cout<< "Line9: q = "<< q << " , *q= "<<*q<<endl<<endl;


    delete p;
    delete q;   //Deallocation//


    return 0;
}
