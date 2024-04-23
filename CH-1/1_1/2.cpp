#include<iostream>

using namespace std;

int main()
{
	int start,end,i,n=0;
	cout <<"Enter Starting Year : ";
	cin >> start;
	cout <<"Enter Ending Year : ";
	cin >> end;
	
	int a[100];
	
	for(i=start;i<=end;i++)
	{
		if(i % 4 == 0)
		{
			a[n] = i;
			n++;
		}
	}
	
	
	cout << endl << "Leap Year : " ;
	for(i=0;i<n;i++)
	{
		cout << a[i] << ",";
	}
	
	return 0;
}
