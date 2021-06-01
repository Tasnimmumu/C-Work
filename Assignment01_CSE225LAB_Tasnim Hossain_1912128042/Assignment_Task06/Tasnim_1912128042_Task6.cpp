
   int num;

    cout << "Enter the number : ";
    cin >> num;//Take input
/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 6: Write a program that determines whether an integer input is odd or even.*/

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{
    if (num%2 == 0){
       cout << num << " is an Even integer. " << endl; //Find Even number
    }

    else{
        cout << num << " is an Odd integer. " << endl;//Find Odd number
    }


    getch();


}
