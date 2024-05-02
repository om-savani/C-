#include<iostream>
using namespace std;

class Shape
{
protected:
	double height,width;

public:
	Shape()
	{
		cout << endl << "Enter Height Of Shape : " ;
		cin >> height ;
		cout << "Enter Width Of Shape : " ;
		cin >> width ;
	}
};

class Triangle : public Shape
{
public:
	void area()
	{
		cout << endl << "Area Of Triangle : " << (height * width) / 2 << endl ;	
	}
};

class Rectangle : public Shape
{
public:
	void area()
	{
		cout << endl << "Area Of Rectangle : " << height * width << endl ;	
	}
};







