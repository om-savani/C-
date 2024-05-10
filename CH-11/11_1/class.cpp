#include "myfunctions.cpp"

class Admin
{
protected:
	string c_name, term;
	double m_salary, e_salary, rev;
	int staff;

	// SETTER
	void setdata()
	{
		cout << "\t--Enter Company Data--" << endl << endl;
		
		cout << "Enter Company name : ";
		c_name = getstring();

		cout << "Enter Manager Salary : ";
		m_salary = getDouble();

		cout << "Enter Employee Salary : ";
		e_salary = getDouble();

		cout << "Enter Company Staff : ";
		staff = getint();

		cout << "Enter Anual Revenue Of Company : ";
		rev = getDouble();

		cout << "Can Terminate(Yes/No) : ";
		term = getstring();
	}

public:
	// GETTER
	void myaccess()
	{
		this->setdata();

		cout << endl << "\t--Company Data--" << endl << endl;

		cout << "Company Name : " << c_name << endl;

		cout << "Manager Salary : " << m_salary << endl;

		cout << "Employee Salary : " << e_salary << endl;

		cout << "Company Staff : " << staff << endl;

		cout << "Anual Revenue Of Company : " << rev << endl;

		cout << "Can Terminate(Yes/No) : " << term << endl;
	}
};

class Manager : protected Admin
{
public:
	void setmngdata()
	{
		cout << endl << "\t--Enter Data--" << endl << endl;

		cout << "Enter Employee Salary : ";
		e_salary = getDouble();

		cout << "Enter Company Staff : ";
		staff = getint();

		cout << "Can Terminate(Yes/No) : ";
		term = getstring();
	}

	void myaccess()
	{
		cout << endl << "\t--Manager Data--" << endl << endl;

		cout << "Company Name : " << c_name << endl ;

		cout << "Manager Salary : " << m_salary << endl;

		cout << "Employee Salary : " << e_salary << endl;

		cout << "Company Staff : " << staff << endl;

		cout << "Can Terminate(Yes/No) : " << term << endl;
	}
};

class Employee : private Manager
{
public:
	void myaccess()
	{
		cout << endl << "\t--Employee Data--" << endl << endl;

		cout << "Company Name : " << c_name << endl;

		cout << "Employee Salary : " << m_salary << endl;	
	}
};
