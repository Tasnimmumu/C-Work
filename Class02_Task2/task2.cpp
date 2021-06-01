/*Name: Tasnim Hossain
ID:1912128042
CSE225; Scetion:2
Task1: Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.*/

#include <iostream>

using namespace std;

int main()
{
    char **String=0;
    int row, col, i, j;

    cout << "Enter the number of rows" << endl;
    cin >> row;
    cout << "Enter the number of columns" << endl;
    cin >> col;
    String = new char*[row];
    for(int i = 0; i < row; ++i)
    String[i] = new char[col];


    cout << "Enter elements: "<< endl;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){

            cin >> String[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << String[i][j] << " ";
        }
        cout << endl;
    }
    delete [] String;



    return 0;
}
