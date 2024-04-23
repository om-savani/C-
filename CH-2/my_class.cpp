#include<iostream>
using namespace std;

class Emp
{
private:
    int id,age,exp;
    string name,role,city,cmp_name;
    double salary;

public:

    

    void setdata()
    {
        Emp a[5];
        int i;

        for(i=0;i<5;i++)
        {
            cout << "Enter Employee- "<< i+1 <<" Id : ";
            cin >> a[i].id;
            cout << "Enter Employee- "<< i+1 <<" Name : ";
            cin >> a[i].name;
            cout << "Enter Employee- "<< i+1 <<" Age : ";
            cin >> a[i].age;
            cout << "Enter Employee- "<< i+1 <<" Role : ";
            cin >> a[i].role;
            cout << "Enter Employee- "<< i+1 <<" Salary : ";
            cin >> a[i].salary;
            cout << "Enter Employee- "<< i+1 <<" City : ";
            cin >> a[i].city;
            cout << "Enter Employee- "<< i+1 <<" Experience : ";
            cin >> a[i].exp;
            cout << "Enter Employee- "<< i+1 <<" Company Name : ";
            cin >> a[i].cmp_name;
            cout << endl << endl << "";
        }

        cout << endl << endl << "--EMPLOYEE DATA--"<< endl << endl ;
        getdata(0,a);
    }

    void getdata(int i,Emp a[])
    {

        for(i=0;i<5;i++)
        {
             cout << "Employe-"<< i+1 << "Id : "<< a[i].id << "" << endl ;
             cout << "Employe-"<< i+1 << "Name : "<< a[i].name << "" << endl ;
             cout << "Employe-"<< i+1 << "Age : "<< a[i].age << "" << endl ;
             cout << "Employe-"<< i+1 << "Role : "<< a[i].role << "" << endl ;
             cout << "Employe-"<< i+1 << "salary : "<< a[i].salary << "" << endl ;
             cout << "Employe-"<< i+1 << "City : "<< a[i].city << "" << endl ;
             cout << "Employe-"<< i+1 << "Experience : "<< a[i].exp << "" << endl ;
             cout << "Employe-"<< i+1 << "Company Name : "<< a[i].cmp_name << "" << endl << endl ;
        }   
    }
};

class Car
{
private:
    
    int id,year;
    string C_name,color,model;

public:
    void setdata2()
    {
        Car c[4];
        int i;

        for(i=0;i<4;i++)
        {
             cout << "Enter Car- "<< i+1 <<" Id : ";
             cin >> c[i].id;
             cout << "Enter Car- "<< i+1 <<" Company Name : ";
             cin >> c[i].C_name;
             cout << "Enter Car- "<< i+1 <<" Color : ";
             cin >> c[i].color;
             cout << "Enter Car- "<< i+1 <<" Model : ";
             cin >> c[i].model;
             cout << "Enter Car- "<< i+1 <<" Release Year : ";
             cin >> c[i].year;
             cout << endl << endl << "";
        }

        cout << endl << endl << "--CAR DATA--"<< endl << endl ;
        getdata2(0,c);
    }

    void getdata2(int i,Car c[])
    {
        for(i=0;i<4;i++)
        {
            cout << "Car-"<< i+1 << "Id : "<< c[i].id << "" << endl ;
            cout << "Car-"<< i+1 << "Company Name : "<< c[i].C_name << "" << endl ;
            cout << "Car-"<< i+1 << "Color : "<< c[i].color << "" << endl ;
            cout << "Car-"<< i+1 << "Model : "<< c[i].model << "" << endl ;
            cout << "Car-"<< i+1 << "Release Year : "<< c[i].year << "" << endl << endl ;  
        }
    }
};