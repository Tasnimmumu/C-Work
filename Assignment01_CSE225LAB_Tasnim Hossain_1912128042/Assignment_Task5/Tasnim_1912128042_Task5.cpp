/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 5: Write a program to read an integer amount and break the amount into smallest possible number of bank notes.*/


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int amount,total;
    cout<< "Input the amount: ";
    cin >> amount;//Take input

    cout << amount <<"\n";
    cout << amount/100 << " note(s) of 100.00\n";
    total = (amount%100);

    cout << total/50 << " note(s) of 50.00\n";
    total = (total%50);

    cout << total/20 << " note(s) of 20.00\n";
    total = (total%20);

    cout << total/10 << " note(s) of 10.00\n";
    total = (total%10);

    cout << total/5 << " note(s) of 5.00\n";
    total = (total%5);

    cout << total/2 << " note(s) of 2.00\n";
    total = (total%2);

    cout << total/1 << " note(s) of 1.00\n";

    getch();
}
