#include <iostream>
#include "dynarr.h"
#include "dynArr.cpp"
using namespace std;

int main()
{
    dynArr <int> d1;
    int row,col;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;
    cout<<"Enter number of columns: "<<endl;
    cin>>col;
    dynArr <int> d2(row,col);
    cout<<"Enter Array Elements:"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
                int value;
        cin>>value;
            d2.setValue(i,j,value);
        }
    }
    cout<<"Your values:"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
               cout<< d2.getValue(i,j)<<" ";;
        }
        cout<<endl;
    }
    d2.~dynArr();

    return 0;
}

