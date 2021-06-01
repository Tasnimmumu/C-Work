/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 10:Write a program that reads a month number and prints the number of days in that month.
 You must use switch-case to solve this problem. Assume that February has 28 days.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{
  int month;
	int days;

	cout<< "Enter month: ";
	cin>> month;//Take a input

	switch(month)
	{
		case  4:
		case  6:
		case  9:      //Consider month- 4,6,9,11 and this four months shows 30 days
		case 11:
			days = 30;
			break;

		case  1:
		case  3:
		case  5:
		case  7:    //Consider month- 1,3,5,7,8,10,12 and this seven months shows 31 days
		case  8:
		case 10:
		case 12:
			days = 31;
			break;

		case 2:
			days = 28;  //Consider month February and only this second month shows 28 days
			break;

		default:
			days = 0;   //For invalid month it shows a invalid massage
			break;
	}

	if(days){
        cout<< "Number of days in month is: " <<days <<endl;
	}

	else{
      cout<< "You have entered an invalid month!!!";
	}

	getch();

}

