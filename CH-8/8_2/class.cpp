#include<iostream>

using namespace std;

class HighVal
{
	int n;
	
public:
	
	void setN()
	{
		cout << "Enter Any Number : " ;
		cin >> n ;
	}

	void getN()
	{
		cout << "Maximum Number : " << n << endl;
	}
	
	HighVal operator<(HighVal b2)
	{
		if(n < b2.n)
		{
			return b2;
		}
		else
		{
			b2.n = n;
			return b2;
		}
	}
};
