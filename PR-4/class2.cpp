#include <iostream>
using namespace std;

class Distance
{
public:
    int km, meter;

    void setdata()
    {
        cout << "Enter Distance In Kilometers : ";
        cin >> km;
        
        cout << "Enter Distance In Meters : ";
        cin >> meter;
    }

    Distance operator+(Distance d2)
    {
        Distance d;

        d.km = km + d2.km;
        d.meter = meter + d2.meter;

        return d;
    }

    void getdata()
    {
        cout << "Distance In Kilometers : " << km << endl;
        cout << "Distance In Inches : " << meter << endl;
    }
};
