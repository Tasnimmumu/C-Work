#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

template <class Maliha>
class Calculator{
       private :
        Maliha num1;
        Maliha num2;
       public:
        Maliha sum(Maliha,Maliha);
        Maliha product(Maliha,Maliha);
        void addition(Maliha,Maliha);
        void subtraction(Maliha&,Maliha,Maliha);
        void devide(Maliha&);

};


#endif // CALCULATOR_H_INCLUDED
