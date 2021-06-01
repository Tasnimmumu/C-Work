#include <iostream>

using namespace std;

int main()
{
    int *intArray;
    int arraysize;
    int i;
    cout<<"Enter Array size: "<<endl;
    cin>> arraysize;
    cout<<endl;
    intArray = new int [arraysize];
    for(i=0; i<arraysize;i++)
    {
        intArray[i]=i+1;
    }
    for(i=0; i<arraysize; i++){
        cout<<intArray[i]<<" ";  //using index//
    }
    for(i=0; i<arraysize; i++){
        cout<<*(intArray+i)<<" ";  //using pointers//
    }
    cout<<endl;
    delete []intArray;

    return 0;
}
