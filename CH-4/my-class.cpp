#include<iostream>
using namespace std;

class Stud
{
private:
	int id,age;
	string name,course,city,email,college;
	
public:

	void setdata()
	{
		Stud x[5];
		int i;
		
		for(i=0;i<5;i++)
		{
			cout << "Enter Student "<< i+1 << " Id : " ;
			cin >> x[i].id ;
			cout << "Enter Student "<< i+1 << " Name : " ;
			cin >> x[i].name ;
			cout << "Enter Student "<< i+1 << " Age : " ;
			cin >> x[i].age ;
			cout << "Enter Student "<< i+1 << " Course : " ;
			cin >> x[i].course ;
			cout << "Enter Student "<< i+1 << " City : " ;
			cin >> x[i].city ;
			cout << "Enter Student "<< i+1 << " Email : " ;
			cin >> x[i].email ;
			cout << "Enter Student "<< i+1 << " College : " ;
			cin >> x[i].college ;
		}
		
		getdata(i,x);
	}
	
	
	void getdata(int i,Stud x[])
	{
		for(i=0;i<5;i++)
		{
			cout << "Student-"<< i+1 << " Id : "<< x[i].id << "" << endl ;
        	cout << "Student-"<< i+1 << " Name : "<< x[i].name << "" << endl ;
        	cout << "Student-"<< i+1 << " Age : "<< x[i].age << "" << endl ;
       		cout << "Student-"<< i+1 << " Course : "<< x[i].course << "" << endl ;
        	cout << "Student-"<< i+1 << " City : "<< x[i].city << "" << endl ;
        	cout << "Student-"<< i+1 << " Email : "<< x[i].email << "" << endl ;
        	cout << "Student-"<< i+1 << " College : "<< x[i].college << "" << endl << endl ;
		}
	}
};


class Customer
{
private:
	int id,age;
	string name,m_no,city,val,cmp;
	
public:

	void setdata()
	{
		Customer x[5];
		int i;
		
		for(i=0;i<5;i++)
		{
			cout << "Enter Customer "<< i+1 << " Id : " ;
			cin >> x[i].id ;
			cout << "Enter Customer "<< i+1 << " Name : " ;
			cin >> x[i].name ;
			cout << "Enter Customer "<< i+1 << " Age : " ;
			cin >> x[i].age ;
			cout << "Enter Customer "<< i+1 << " City : " ;
			cin >> x[i].city ;
			cout << "Enter Customer "<< i+1 << " Mobile No. : " ;
			cin >> x[i].m_no ;
			cout << "Enter Card Validity : " ;
			cin >> x[i].val ;
			cout << "Enter Card Company : " ;
			cin >> x[i].cmp ;
		}
		
		getdata(i,x);
	}
	
	void getdata(int i,Customer x[])
	{
		for(i=0;i<5;i++)
		{
			cout << endl << endl <<"Customer-"<< i+1 << " Id : "<< x[i].id << "" << endl ;
        	cout << "Customer-"<< i+1 << " Name : "<< x[i].name << "" << endl ;
        	cout << "Customer-"<< i+1 << " Age : "<< x[i].age << "" << endl ;
       		cout << "Customer-"<< i+1 << " City : "<< x[i].city << "" << endl ;
        	cout << "Customer-"<< i+1 << " City : "<< x[i].m_no << "" << endl ;
        	cout << "Card-"<< i+1 << " Validity : "<< x[i].val << " Years" << endl ;
        	cout << "Card-"<< i+1 << " Company : "<< x[i].cmp << "" << endl << endl ;
		}
	}
};