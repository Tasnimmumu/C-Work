#ifndef TIMESTAMP_H_INCLUDED
#define TIMEsSTAM_H_INCLUDED


class Time
{
    public:
        Time();
        Time(int,int,int);
        void setHour(int);
        void setMin(int);
        void setSec(int);
        int getHour();
        int getMin();
        int getSec();
        bool operator<(Time,Time);
        bool operator!=(Time,Time);
        void print();
    private:
        int hour,minute,second;
};

#endif // TIME_H
