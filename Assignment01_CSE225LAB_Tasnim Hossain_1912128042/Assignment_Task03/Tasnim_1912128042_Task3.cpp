/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 3: Ask user for two integers, 𝑎𝑎 and 𝑏𝑏. Then swap (interchange) the values of 𝑎𝑎 and 𝑏𝑏.
That means, 𝑎𝑎 should get the value of 𝑏𝑏 and 𝑏𝑏 should get the value of 𝑎𝑎.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{
    int aa,bb,temp = 0;//holds vaules
    cout << "Enter first integer number: ";
    cin >> aa;
    cout << "Enter second integer number: ";
    cin >> bb;
    cout << "Before swapping." << endl;
    cout << "aa = " << aa << ", bb = " << bb << endl;//Before swapping values are

    temp  = aa;
    aa  = bb;     //Swapping process
    bb  = temp;

    cout << "Before swapping." << endl;
    cout << "aa = " << aa << ", bb = " << bb << endl;//After swapping values are

    getch();
    //end function main

}
