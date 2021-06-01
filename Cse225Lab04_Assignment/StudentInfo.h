#ifndef STUDENTDATA_H_INCLUDED
#define STUDENTDATA_H_INCLUDED
#include <iostream>
using namespace std;
class studentData
{

public:
    studentData();
    studentData(int,string,float);
    void setID(int);
    void setName(string);
    void setCgpa(float);
    int getId();
    string getName();
    float getCgpa();
    void print();
    friend bool operator == (studentData, studentData);
    friend bool operator != (studentData, studentData);
private:
    int id;
    string name;
    float cgpa;
};
#endif // STUDENTDATA_H_INCLUDED
