#include "calculator.h"

//return_type  class_name :: function_name(parameter)
template <class Maliha>

Maliha Calculator<Maliha>::sum(Maliha num1, Maliha num2)
{
    Maliha sum=num1+num2;
    return sum;
}
template <class Maliha>
Maliha Calculator<Maliha>::product(Maliha num1, Maliha num2)
{
    return num1*num2;
}
template <class Maliha>
void Calculator<Maliha>::subtraction(Maliha& sub, Maliha n1, Maliha n2){
   sub = n2-n1;

}
template <class Maliha>
void Calculator<Maliha>::devide(Maliha& dev)
{  Maliha n1=5,n2=10;
  dev = n2/n1;
}

