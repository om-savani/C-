#include <iostream>

using namespace std;

class Cmp
{
private:
	int s_qty, d_import, d_export, id, n, i;
	double revenue;
	static int c_id;
	string name, ceo;

public:
	Cmp(string name, int s_qty, int revenue, int d_import, int d_export, string ceo)
	{
		this->name = name;
		this->s_qty = s_qty;
		this->revenue = revenue;
		this->d_import = d_import;
		this->d_export = d_export;
		this->ceo = ceo;
	}

	void getdata()
	{
		cout << endl
			 << endl
			 << endl;
		cout << "Company Id : " << c_id++ << endl;
		cout << "Company Name : " << name << endl;
		cout << "Staff Quantity : " << s_qty << endl;
		cout << "Revenue Per Year : " << revenue << endl;
		cout << "Import Raw Diamonds(per year) : " << d_import << endl;
		cout << "Export Raw Diamonds(per year) : " << d_export << endl;
		cout << "CEO : " << ceo << endl;
	}

	~Cmp()
	{
		this->getdata();
	}
};

int Cmp::c_id = 101;

class Cafe
{
private:
	int id, rate, s_qty, e_year, i, j;
	string name, type, loation;
	static int s_id;
	static int a;

public:
	Cafe()
	{
		cout << endl
			 << "Enter Cafe " << a++ << " details" << endl
			 << endl;
		this->setdata();
	}

	void setdata()
	{

		cout << endl
			 << "Enter Cafe Name : ";
		cin >> name;
		cout << "Enter Cafe Type(Normal/Rooftop) : ";
		cin >> type;
		cout << "Enter Cafe Rating(1Star To 7Star) : ";
		cin >> rate;
		cout << "Enter Cafe Location(City) : ";
		cin >> loation;
		cout << "Enter cafe Establish Year : ";
		cin >> e_year;
		cout << "Enter Cafe Staff Quantity : ";
		cin >> s_qty;
	}

	void getdata()
	{
		cout << endl
			 << endl
			 << "Hotel Id : " << s_id++ << endl;
		cout << "Hotel Name : " << name << endl;
		cout << "Hotel Type : " << type << endl;
		cout << "Hotel Rating : " << rate << endl;
		cout << "Hotel Location : " << loation << endl;
		cout << "Hotel Establish Year : " << e_year << endl;
		cout << "Hotel Staff Quantity : " << s_qty << endl;
	}

	~Cafe()
	{
		cout << endl
			 << endl
			 << "Cafe details" << endl
			 << endl;
		this->getdata();
	}
};

int Cafe::s_id = 101;
int Cafe::a = 1;