#include <iostream>
#include "SortedType.cpp"
#include "timeStamp.h"

using namespace std;

void Print(Sorted<Time> s)
{
    for(int i=0;i<s.LengthIs(); i++)
    {
        Time temp;
        s.GetNextItem(temp);
        temp.print();
    }
    s.ResetList();
    cout<<endl;
}

int main()
{
    cout << "Numbers: " << endl;

    Sorted<int> s;

    cout << "Length of the list are : " << s.LengthIs() << endl;
    s.Insert(5);
    s.Insert(7);
    s.Insert(4);
    s.Insert(2);
    s.Insert(1);

    int number;
    for(int i=0; i<s.LengthIs(); i++)
    {
        s.GetNextItem(number);
        cout << number << " ";
    }
    cout << endl;

    bool f;
    int n=6;
    s.Retrieve(n,f);
    if(f)
        cout << n <<" Item is not found. " << endl;
    else
        cout << n << " Item is found. " << endl;

    n=5;
    s.Retrieve(n,f);
    if(f)
        cout << n <<" Item is found. " << endl;
    else
        cout << n << " Item is not found." << endl;

    if(s.isFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    s.Delete(1);
    s.ResetList();
    for(int i=0; i<s.LengthIs(); i++)
    {
        s.GetNextItem(number);
        cout << number << " ";
    }
    cout << endl;

    if(s.isFull())
        cout << "List is Full" << endl;
    else
        cout << "List is not Full" << endl;

    Time ti1(15, 34, 23);
    Time ti2(13, 13, 02);
    Time ti3(43, 45, 12);
    Time ti4(25, 36, 17);
    Time ti5(52, 02, 20);

    Sorted<Time> st;

    st.Insert(ti1);
    st.Insert(ti2);
    st.Insert(ti3);
    st.Insert(ti4);
    st.Insert(ti5);

    st.Delete(ti4);
    st.ResetList();
    Print(st);
    return 0;

}
