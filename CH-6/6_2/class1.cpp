#include<iostream>

using namespace std;

class A
{
protected:
	int a;
};

class B : public A
{
protected:
	int b;

public:
	B()
	{
		cout << "Enter A : ";
        	cin >> a;
		cout << "Enter B : ";
        	cin >> b;
	}
};

class C : public A
{
protected:
	int c;

public:
	C()
	{
		cout << "Enter C : ";
       		cin >> c;
	}
};

class D : public B, public C
{
protected:
    int d,sum=0;

public:
	D()
	{
		cout << "Enter D : ";
        	cin >> d;

		sum = B::a + b + c + d;
        	cout << endl << "Sum = " << sum << endl;
	}

};

