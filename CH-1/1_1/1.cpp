#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout <<"Enter Size Of Array : ";
	cin >> n;
	
	int a[n];
	
	cout << endl <<"INPUT-ARRAY"<<endl <<endl ;
	for(i=0;i<n;i++)
	{
		cout <<"Enter a[" << i << "]: ";
		cin >> a[i];
	}
	
	cout << endl << "OUTPUT-ARRAY" << endl << endl;
	for(i=0;i<n;i++)
	{
		cout <<" a[" << i << "]: " << a[i] << endl;
	}
	
	cout << endl << "Even Elements : " ;
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			cout << a[i] << ",";
		}
	}
	
	return 0;
}
