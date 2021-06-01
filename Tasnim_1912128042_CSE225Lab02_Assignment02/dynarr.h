#ifndef dynarr_H_INCLUDED
#define dynarr_H_INCLUDED
template<class ArrayType>
class dynArr
{
private:
ArrayType *data;
ArrayType size;
public:
dynArr();
dynArr(v);
~dynArr();
void setValue(ArrayType, ArrayType);
int getValue(ArrayType);
void allocate(ArrayType);
};



#endif // dynarr_H_INCLUDED
