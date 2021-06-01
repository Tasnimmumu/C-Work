/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 /*

/*Task 2: Write a program that asks the user to enter two integer numbers,
 obtains the two numbers from the user and prints the sum,
 product, difference, quotient and remainder of the two numbers*/


#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//

int main()
{
 int num1; // first integer
 int num2; // second integer
 int sum; //holds sum
 int product; //holds product
 int difference; //holds difference
 float quotient; //holds quotient
 float remainder; //holds remainder

 cout << "Enter first integer number: ";
 cin >> num1;
 cout << "Enter second integer number: ";
 cin >> num2;

 sum=num1+num2;//Here is the Addition
 cout<<"Sum is: "<<sum<<endl;

 product=num1*num2;//Here is the Multiplication
 cout<<"Product is: "<<product<<endl;

 difference=num1-num2;//Here is the Substraction
 cout<<"Difference is: "<<difference<<endl;

 quotient=(float)num1/num2;//Here is the Quotient
 cout<<"Quotient is: "<<quotient<<endl;

 remainder = (float)(num1%num2);//Here is the Remainder
 cout<<"Remainder is: "<<remainder<<endl;

 getch();
} // end function main
