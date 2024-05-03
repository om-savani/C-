#include<iostream>
using namespace std;

class Cricket
{
public:
	int o1,o2;
};

class T20 : public Cricket
{
public:
    void getTotalovers(int o1)
    {
        cout << "Total Overs In T20 Matches : " << o1 << endl;
    }
};

class Testmatch : public Cricket
{
public:
    void getTotalovers(int o2)
    {
        cout << "Total Overs In Test Matches : " << o2 << endl;
    }
};
