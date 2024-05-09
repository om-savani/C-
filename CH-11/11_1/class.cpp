#include<iostream>
using namespace std;

class Admin
{
private:
	string c_name,term;
	double m_salary,e_salary,rev;
	int staff;
	
	// SETTER
	void setcmpname()
	{
		cout << "Enter Company name : " ;
		cin >> c_name ;
	}
	
	void setmsalary()
	{
		cout << "Enter Manager Salary : " ;
		cin >> m_salary ;
	}
	
	void setempsalary()
	{
		cout << "Enter Employee Salary : " ;
		cin >> e_salary ;
	}
	
	void setstaff()
	{
		cout << "Enter Company Staff : " ;
		cin >> staff ;
	}
	
	void setrevenue()
	{
		cout << "Enter Anual Revenue Of Company : " ;
		cin >> rev ;
	}
	
	void can_term()
	{
		cout << "Can Terminate(Yes/No) : " ;
		cin >> term ;
	}
	
};

class Manager
