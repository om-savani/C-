#include<iostream>
using namespace std;

class A
{
protected:
	int id,exp;
	double salary;
	string name,role,cmp,address,email,contact;
	
public:
	void seta()
	{
		cout << "Enter Employee Id : " ;
		cin >> id ;
		fflush(stdin);
		cout << "Enter Employee Name : " ;
		cin >> name ;
		fflush(stdin);
		cout << "Enter Employee Role : " ;
		cin >> role ;
	}
};

class B : public A
{
public:
	void setb()
	{
		fflush(stdin);
		cout << "Enter Employee Salary(Per Year) : " ;
		cin >> salary ;
		fflush(stdin);
		cout << "Enter Employee Experience(In Years) : " ;
		cin >> exp ;
	}	
};

class C : public B
{
public:
	void setc()
	{
		fflush(stdin);
		cout << "Enter Employee Company Name : " ;
		cin >> cmp ;
		fflush(stdin);
		cout << "Enter Employee Address : " ;
		cin >> address ;
	}
	
	void getc()
	{
		cout << "Employee Name : " << name << endl
			 << "Employee Role : " << role << endl
			 << "Employee Salary : " << salary << endl	;
	}	
};

class D : public C
{
public:
	void setd()
	{
		fflush(stdin);
		cout << "Enter Employee Email : " ;
		cin >> email ;
		fflush(stdin);
		cout << "Enter Employee Contact No. : " ;
		cin >> contact ;
	}	
	
	void getd()
	{
		cout << "Employee Id : " << id << endl
			 << "Employee Name : " << name << endl
			 << "Employee Role : " << role << endl
			 << "Employee Salary : " << salary << endl
			 << "Employee Experience(In Years) : " << exp << endl
			 << "Employee Company Name : " << cmp << endl
			 << "Employee Address : " << address << endl
			 << "Employee Email : " << email << endl
			 << "Employee Contact No. : " << contact << endl ;	
	}
};





