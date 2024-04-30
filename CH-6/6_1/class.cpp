#include<iostream>

using namespace std;

class X
{
protected:
	int a,b,c;
};

class Y : public X
{
public:
	void setdata()
	{
		cout << "Enter Value Of A : " ;
		cin >> a;
		cout << "Enter Value Of B : " ;
		cin >> b;
		cout << "Enter Value Of C : " ;
		cin >> c;	
	}
	
	void getdata()
	{
		cout << "Sum Of All Three Number's Cubes : " << (a*a*a) + (b*b*b) + (c*c*c) << endl ;
	}
};

class P
{
protected:
	float temp;
	
public:
	void setdata1()
	{
		cout << "Enter Temperature In Celsius : " ;
		cin >> temp ;
		cout << endl << "Temperature Is : " << temp << " Celsious" << endl ;
	}	
};

class Q : public P
{
public:
	
	void toFehrenheit()
	{
		cout << "Temperature Is : " << (temp * 1.8) + 32 << " Fehrenheit" << endl ;
	}	
};

class R : public Q
{
public:
	
	void toKelvin()
	{
		cout << "Temperature Is : " << temp + 273.15 << " Kelvin" << endl ;
	}	
};



