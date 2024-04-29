#include"my-class.cpp"

int main()
{
	int n;
	cout << "Enter Number Of Trains : " ;
	cin >> n ;
	Train x ;
	
	if(n>=3)
	{
		cout << endl << "Enter Train Details " << endl ; 
		x.setdata(n);
	}
	else
	{
		cout << "Please Enter Minimum 3 Number Of Trains" ;
	}
	
	
}
