#include<iostream>
using namespace std;

class A
{
protected:
	int n;

public:	
	void setnum()
	{
		cout << endl << "Enter Any Number : " ;
		cin >> n;
	}
};

class Square : public A
{
public:
	void getsquare()
	{
		cout << endl << "Square Of " << n << " Is : " << n*n << endl ;
	}
};

class Cube : public A
{
public:
	void getcube()
	{
		cout << endl << "Cube Of " << n << " Is : " << n*n*n << endl ;
	}
};
