#include<iostream>
using namespace std;

class Distance
{
public:
    int feet,inch;

    void set_get()
    {
        Distance d1,d2;
        int tf,ti;

        cout << "Enter First Distance In Feet : " ;
        cin >> d1.feet ;
        cout << "Enter First Distance In Inches : " ;
        cin >> d1.inch ;
        cout << "Enter Second Distance In Feet : " ;
        cin >> d2.feet ;
        cout << "Enter Second Distance In Inches : " ;
        cin >> d2.inch ;

        tf = d1.feet + d2.feet;
        ti = d1.inch + d2.inch;

        while(ti >= 12)
        {
            ti -= 12;
            tf++;
        }

        cout << endl << "Total Distance : " << tf << " Feet And "<< ti << " Inches";
    }
};

class Time
{
public:
    int second;

    void set_get2()
    {
        Time t;
        int h=0,m=0,s=0;

        cout << "Enter Secons : " ;
        cin >> t.second ;

        h = t.second / 3600 ;
        m = (t.second % 3600) / 60 ;
        s = ((t.second % 3600) % 60);

        cout << "Time => "<< h << ":" << m << ":"<< s << "";
    }
};