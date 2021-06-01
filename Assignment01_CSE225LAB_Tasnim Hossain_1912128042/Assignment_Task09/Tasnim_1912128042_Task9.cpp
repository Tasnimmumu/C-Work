/*Name: Tasnim Hossain
ID: 1912128042
Course: CSE225L; Section: 02
Date: 09/11/2020 */

/* Task 9: Write a program that asks user for an arithmetic operator (+, - , * or / ) and two operands, a and b.
 Display the result of the corresponding operation using switch statement. */

#include <iostream>
#include <conio.h>

using namespace std;
//This the main body part of the program//
int main()
{

    char op;
    float n1, n2;

    cout << "Enter the operator: "<<endl;
    cin >> op;

    cout << "Enter a: "<<endl;
    cin >> n1;
    cout << "Enter b: "<<endl;
    cin >> n2;

    switch(op)
    {
        case '+':
            cout << "Result: "<< n1+n2;
            break;

        case '-':
            cout << "Result: "<< n1-n2;
            break;

        case '*':
            cout << "Result: "<< n1*n2;
            break;

        case '/':
            cout << "Result:" << n1/n2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! This operator is not correct";
            break;
    }
    getch();
}
