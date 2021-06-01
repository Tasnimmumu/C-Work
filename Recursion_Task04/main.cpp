#include <iostream>
using namespace std;

int findMin(int a[], int size);
{

    if (size == 1)
        return a[0];
    return min(a[size-1], findMin(a, size-1));
}

// driver code to test above function
int main()
{
    int a[] = {1, 4, 45, 6, -50, 10, 2};
    int size = sizeof(a)/sizeof(a[0]);
    cout <<  findMin(a, size);
    return 0;
}
