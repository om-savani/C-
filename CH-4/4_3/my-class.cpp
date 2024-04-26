#include<iostraem>

using namespace std;

class Cmp
{
private:
	
	int s_qty,d_import,d_export,id,n,i;
	double revenue;
	string name,ceo;
	
public:
	
	Cmp setdata(int id,int n)
	{
		Cmp x[n];
		
		for(i=0;i<n;i++)
		{
			cout << endl << endl << "Enter Company " << a++ << " Data" << endl << endl ;
			cout << "Enter Company Name : " ;
			cin >> x[i].name ;
			cout << "Enter Staff Quantity : " ;
			cin >> x[i].s_qty;
			cout << "Enter Company Revenue(per year) : " ;
			cin >> x[i].revenue ;
			cout << "Enter Import Raw Diamonds(per year) : " ;
			cin >> x[i].d_import ;
			cout << "Enter Export Raw Diamonds(per year) : " ;
			cin >> x[i].d_export ;
			cout << "Enter Company CEO Name : " ;
			cin >> x[i].ceo ;
		}		
	}
	
	~Cmp getdata(Hotel x[],int i,int j)
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

