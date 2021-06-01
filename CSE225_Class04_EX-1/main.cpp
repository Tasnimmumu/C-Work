#include <iostream>

using namespace std;

int main()
{
    //int *a = new int[4];
    int *a;//create on stack//
    a = new int;//create on heap//
    a[0]=10;
    a[1]=30;
    a[2]=50;
    cout<<*a<<endl;
    cout<<*(a+2)<<endl;
    cout<<*a+1<<endl;
    cout<<*(a+2)+1<<endl;    //Dynamic memory allocation//
    delete []a; //deallocation
    return 0;
}
