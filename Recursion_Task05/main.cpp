#include <iostream>
using namespace std;

int DecToBin(int dec);
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 *
                find(dec / 2));
}

int main()
{
    int dec = 10;
    cout << find(dec);
    return 0;
}
