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
};

class C : public A
{
protected:
	int c;
};

class D : public B, public C
{
protected:
    int d,sum=0;

public:
	D()
	{
		cout << "Enter A : " ;
		cin >> B::a;
		cout << "Enter B : ";
        cin >> b;
		cout << "Enter C : ";
        cin >> c;
		cout << "Enter D : ";
        cin >> d;

		sum = B::a + b + c + d;
        cout << endl << "Sum = " << sum << endl;
	}

};

