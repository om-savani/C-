#include "class2.cpp"

int main()
{
    Distance d1, d2, d3;

    cout << "Enter First Distance : " << endl;
    d1.setdata();
    cout << endl
         << "Enter Second Distance : " << endl;
    d2.setdata();

    d3 = d1 + d2;

    while (d3.meter >= 1000)
    {
        d3.meter -= 1000;
        d3.km++;
    }

    cout << endl
         << "Total Distance : " << endl;

    d3.getdata();

    return 0;
}