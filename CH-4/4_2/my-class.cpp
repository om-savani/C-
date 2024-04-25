#include<iostream>
using namespace std;

class Hotel
{
private:
	int id,rate,s_qty,r_qty,e_year;
	string name,type,loation;
	static int s_id;
	static int a;
	
public:	

	void setdata()
	{
		int j,i;
		cout << "Enter Number Of Hotels : " ;
		cin >> j ;
		Hotel x[j];
		
		for(i=0;i<j;i++)
		{
			cout << endl << endl << "Enter Hotel " << a++ << " Detail" << endl << endl ;
			cout << "Enter Hotel Name : " ;
			cin >> x[i].name ;
			cout << "Enter Hotel Type(Holet/Motel) : " ;
			cin >> x[i].type ;
			cout << "Enter Hotel Rating(1Star To 7Star) : " ;
			cin >> x[i].rate ;
			cout << "Enter Hotel Location(City) : " ;
			cin >> x[i].loation ;
			cout << "Enter Hotel Establish Year : " ;
			cin >> x[i].e_year ;
			cout << "Enter Hotel Staff Quantity : " ;
			cin >> x[i].s_qty ;
			cout << "Enter Hotel Room Quantity : " ;
			cin >> x[i].r_qty ;
			
		}
		getdata(x,0,j);
	}
	
	void getdata(Hotel x[],int i,int j)
	{
		for(i=0;i<j;i++)
		{
			cout << endl << endl << "Hotel " << i+1 << " Detail" << endl << endl ;
			cout << "Hotel Id : " << s_id++ << endl ;
			cout << "Hotel Name : " << x[i].name << endl ;
			cout << "Hotel Type : " << x[i].type << endl ;
			cout << "Hotel Rating : " << x[i].rate << endl ;
			cout << "Hotel Location : " << x[i].loation << endl ;
			cout << "Hotel Establish Year : " << x[i].e_year << endl ;
			cout << "Hotel Staff Quantity : " << x[i].s_qty << endl ;
			cout << "Hotel Room Quantity : " << x[i].r_qty << endl ;
		}
	}
		
};

int Hotel::s_id = 101;
int Hotel::a = 1;
