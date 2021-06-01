#include "dynarr.h"
#include <iostream>
using namespace std;

template <class ArrayType>
dynArr <ArrayType>::dynArr()
{
     data = NULL;
     size = 0;
}
dynArr <ArrayType>::dynArr(ArrayType s,ArrayType c)
{
     data = new ArrayType*[s];

    for(ArrayType i=0; i<s; i++){
        data[i] = new ArrayType[c];
    }
     size = s;
}
dynArr <ArrayType>::~dynArr()
{
    delete [] data;
}
ArrayType dynArr <ArrayType>::getValue(int index,ArrayType col)
{
    return data[index][col];
}
void dynArr::setValue(int index, ArrayType col,ArrayType value)
{
    data[index][col] = value;
}
