#include <iostream>
using namespace std;
int main(){
   int num;

   bool f1 = true;

   cin>>num;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         f1 = false;
         break;
      }
   }

   if (f1==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
