/*Name: Tasnim Hossain
ID:1912128042
CSE225; Scetion:2
Task1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.*/

#include<iostream>
#include<conio.h>
using namespace std;
int main() {
   int i,n;
   cout<<"How many numbers you will entered?"<<"\n";
   cin>>n;
   int *a = new int(n);
   cout<<"Enter "<<n<<" elements"<<endl;
   for(i = 0;i<n;i++) {
      cin>>a[i];
   }
   cout<<"Entered elements are: ";
   for(i = 0;i<n;i++) {
      cout<<a[i]<<" ";
   }
   cout<<endl;
   delete (a);
   getch();
}
