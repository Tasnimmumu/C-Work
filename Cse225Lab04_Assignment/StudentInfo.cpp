#include "studentData.h"
#include <string>
studentData::studentData()
{
    id=0;
    name="";
    cgpa=0;
}
studentData::studentData(int i, string n, float c)
{

    id = i;
    name = n;
    cgpa = c;

}
void studentData::setID(int i)
{
    id = i;
}
void studentData::setName(string n)
{

    name = n;
}
void studentData::setCgpa(float c)
{

    cgpa = c;
}
int studentData::getId()
{
    return id;
}

string studentData::getName()
{
    return name;
}

float studentData::getCgpa()
{

    return cgpa;
}
void studentData::print()
{
    cout<<id<<" "<<name<<" "<<cgpa<<endl;
}
bool operator == (studentData s1, studentData s2)
{

    if(s1.getId() == s2.getId())
        return true;
    else
        return false;

}
bool operator != (studentData s1, studentData s2)
{

    if(s1.getId() != s2.getId())
        return true;
    else
        return false;
}
