#include <iostream>
#include "StudentInfo.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{

    unsortedtype<int>num;

    num.insertItem(5);
    num.insertItem(6);
    num.insertItem(7);
    num.insertItem(9);

    int val;

    for(int i = 0; i<num.lengthIs(); i++)
    {
        num.getNextItem(val);
        cout<<val<<" ";
    }

    cout<<"\nThe length of the List is "<<num.lengthIs()<<endl;

    num.insertItem(1);
    num.resetList();
    for(int i = 0; i<num.lengthIs(); i++)
    {
        num.getNextItem(val);
        cout<<val<<" ";
    }
    cout<<endl;

    bool found;
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

 //retrieve item//

    num.retrieveItem(n,found);
    if(found)
    {
        cout<<"Item is found"<<endl;

    }
    else
        cout<<"Item is not found"<<endl;
    cout<<endl;


    if(num.isFull())
        cout<<"The list is full"<<endl;
    else
        cout<<"The list is not full"<<endl;

//delete item//

    num.deleteItem(5);

    if(num.isFull())
        cout<<"The list is full"<<endl;
    else
        cout<<"The list is not full"<<endl;

    num.deleteItem(1);
    num.resetList();
    for(int i = 0; i<num.lengthIs(); i++)
    {
        num.getNextItem(val);
        cout<<val<<" ";
    }
    cout<<endl;
    num.deleteItem(6);
    num.resetList();
    for(int i = 0; i<num.lengthIs(); i++)
    {
        num.getNextItem(val);
        cout<<val<<" ";
    }

    cout<<endl;

    UnsortedType<studentData> st;

    studentData st1(15243,"Jon",2.6);
    studentData st2(13732,"Tyrion",3.9);
    studentData st3(13569,"Sandor",1.2);
    studentData st4(15467,"Ramsey",3.1);
    studentData st5(16285,"Arya",3.1);

    st.insertItem(st1);
    st.insertItem(st2);
    st.insertItem(st3);
    st.insertItem(st4);
    st.insertItem(st5);

    studentData index;
    for(int i = 0; i<st.lengthIs(); i++)
    {
        st.getNextItem(index);
        index.print();
    }

    st.deleteItem(st4);

    bool isFound;
    studentData src;
    src.setID(13569);
    st.retrieveItem(src,isFound);
    if(isFound)
    {
        cout<<"Item is found 13569, Sandor, 1.2"<<endl;

    }
    else
        cout<<"Item is not found"<<endl;

    cout<<endl;
    cout<<"15234, Jon, 2.6 " <<endl>> "13732, Tyrion, 3.9" <<endl>> "13569, Sandor, 1.2" <<endl>> "16285, Arya, 3.1"<<endl;

    st.resetList();
    for(int i =0; i<st.lengthIs(); i++)
    {

        st.getNextItem(index);
        index.print();
    }

}
