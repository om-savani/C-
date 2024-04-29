#include<iostream>

using namespace std;

class Train
{
private:
	int t_num,i,num;
	string name,source,destination,time;
	
public:
	
	void setdata(int n)
	{
		Train x[n];
		for(i=0;i<n;i++)
		{
			cout << endl << endl << "Enter Train Number : " ;
			cin >>x[i].t_num ;
			cout << "Enter Train Name : " ;
			cin >>x[i].name ;
			fflush(stdin);
			cout << "Enter Train Source : " ;
			cin >>x[i].source ;
			fflush(stdin);
			cout << "Enter Train Destination : " ;
			cin >>x[i].destination ;
			fflush(stdin);
			cout << "Enter Train Time : " ;
			cin >>x[i].time ;
		}
		getdata(x,n);
	}
	
	void getdata(Train x[],int n)
	{
		cout << endl << endl << "Train Details " << endl << endl ;
		for(i=0;i<n;i++)
		{
			cout << "Train Number : " <<x[i].t_num << endl ;
			cout << "Train Name : " <<x[i].name << endl ;
			cout << "Train Source : " <<x[i].source << endl ;
			cout << "Train Destination : " <<x[i].destination << endl ;
			cout << "Train Time : " <<x[i].time << endl ;
		}
		
		getdata2(x,n);
	}
	
	void getdata2(Train x[],int n)
	{
		cout << endl << endl << "Enter Any Train Number : " ;
		cin >> num ;
		
		for(i=0;i<n;i++)
		{
			if(x[i].t_num == num)
			{
				cout << endl << "Train Number : " <<x[i].t_num << endl ;
				cout << "Train Name : " <<x[i].name << endl ;
				cout << "Train Source : " <<x[i].source << endl ;
				cout << "Train Destination : " <<x[i].destination << endl ;
				cout << "Train Time : " <<x[i].time << endl ;
			}
		}	
	}
};
