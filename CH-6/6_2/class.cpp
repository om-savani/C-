#include<iostream>

using namespace std;

class RBI
{
protected:
	double rate = 6.5;
	
public:
	
	void getRoi()
	{
		cout << "Bank : RBI" << endl 
			 <<	"Rate Of Interrest : " << rate << "%" ;
	}
};

class SBI : public RBI
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : SBI" << endl 
			 <<	"Rate Of Interrest : " << rate + 1 << "%" ;
	}
};

class BOB : public RBI
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : BOB" << endl 
			 <<	"Rate Of Interrest : " << rate + 1.25 << "%" ;
	}
};

class ICICI : public RBI
{
public:
	
	void getRoi()
	{
		cout << endl << endl << "Bank : ICICI" << endl 
			 <<	"Rate Of Interrest : " << rate + 1.5 << "%" ;
	}
};



