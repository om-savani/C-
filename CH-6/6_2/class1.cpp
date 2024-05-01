#include<iostream>

using namespace std;

class A
{
protected:
	int a,b,c,d;
	
public:
	
	void getRoi()
	{
		cout << "Bank : RBI" << endl 
			 <<	"Rate Of Interrest : " << rate << "%" ;
	}
};

class B : public A
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : SBI" << endl 
			 <<	"Rate Of Interrest : " << rate + 1 << "%" ;
	}
};

class C : public A
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : BOB" << endl 
			 <<	"Rate Of Interrest : " << rate + 1.25 << "%" ;
	}
};

class D : public B, public C
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : ICICI" << endl 
			 <<	"Rate Of Interrest : " << rate + 1.5 << "%" ;
	}
};

