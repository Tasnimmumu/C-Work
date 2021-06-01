#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;

    int *col;
    int **myArray;
    myArray=new int *[row];
    col = new int [row];

    for(int i=0;i<row;i++){
        cout<<"Enter the number of column in row: "<<i+1<<endl;
        cin>>col[i];
        myArray[i]=new int[col[i]];

        cout<<"Enter the elements in the array:"<<endl;

        for(int j=0;j<col[i];j++){
            cin>>myArray[i][j];
        }
    }

    cout<<"The elements in the array:"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<myArray[i][j]<<" ";
        }
        cout<<endl;
    }

    delete []myArray;
    delete []col;
    return 0;
}
