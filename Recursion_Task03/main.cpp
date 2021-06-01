#include <iostream>
using namespace std;

int sumOfDigits(int x)
{
    if (x == 0)
    return 0;
    return (x % 10 + sumOfDigits(x / 10));
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << "Sum of digits:  "<< num  <<" is "<< result << endl;
    return 0;
}
