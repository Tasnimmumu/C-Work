/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 7: Write a program that checks whether a particular year (provided as input) is leap year or not.
To determine whether a year is leap year or not, use the following rules.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{
    int year;
    cout<< "Enter a year: ";
    cin>> year;//Take input

    if(((year % 4 == 0) && (year % 100 != 0)) ||
             (year % 400 == 0)){
                 cout<< year <<" " "is Leap Year" <<endl; //If this condition match then shows leap year
             }

    else{
        cout<< year << " " "is not a Leap Year" <<endl;//If this condition does not match then shows not a leap year
    }


    getch();
    //end the main function


}
