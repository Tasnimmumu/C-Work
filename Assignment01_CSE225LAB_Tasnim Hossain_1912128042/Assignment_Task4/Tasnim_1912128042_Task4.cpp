/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 4: Write a program that reads in 3 integer numbers and prints their average.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{
  int num1,num2,num3;
  float avg;
  cout << "Enter first integer number: ";
  cin >> num1;
  cout << "Enter second integer number: ";
  cin >> num2;
  cout << "Enter third integer number: ";
  cin >> num3;

  avg = (num1+num2+num3)/3;//Calculate Average
  cout << "Average is: "<<avg <<endl;

  getch();

}
