#include "timeStamp.h"
#include<iostream>
using namespace std;

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Time::setHour(int hour)
{
    this->hour = hour;
}

void Time::setMin(int minute)
{
    this->minute = minute;
}

void Time::setSec(int second)
{
    this->second = second;
}

int Time::getHour()
{
    return this->hour;
}

int Time::getMin()
{
    return this->minute;
}

int Time::getSec()
{
    return this->second;
}

bool operator<(Time t1,Time t2)
{
    if(t1.getHour()<t2.getHour())
        return true;
    else
        return false;
}

bool operator!=(Time t1,Time t2)
{
    if(t1.getHour()!=t2.getHour() && t1.getMin()!=t2.getMin() && t1.getSec()!=t2.getSec())
        return true;
    else
        return false;
}

void Time::print()
{
    cout << hour << " : " << minute << " : " << second << endl;
}
