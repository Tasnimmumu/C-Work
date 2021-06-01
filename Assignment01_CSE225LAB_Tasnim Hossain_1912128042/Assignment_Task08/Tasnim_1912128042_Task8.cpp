/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 8: Write a program that finds the maximum of the three numbers provided as input.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{

   float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;//Take input

    if (n1 >= n2 && n1 >= n3)//Compare n2 & n3 with n1
        cout << "Maximum number: " << n1;

    else if (n2 >= n1 && n2 >= n3)//Compare n1 & n3 with n2
        cout << "Maximum number: " << n2;

    else if (n3 >= n1 && n3 >= n2)//Compare n1 & n2 with n3
        cout << "Maximum number: " << n3;


    getch();
    //end the main function
}
