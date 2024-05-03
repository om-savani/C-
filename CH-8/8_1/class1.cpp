#include<iostream>
using namespace std;

class Calc
{
public:
	
	int a,b,c,d,e;
	
};

class Operation : public Calc
{
public:
		void calculate(int a,int b)
		{
			cout << endl << "Addition Is : "<< a + b ;
		}
			
		void calculate(int a,int b,int c)
		{
			
			cout << endl << "Subtraction Is : "<< a - b - c ;
		}
			
		void calculate(int a,int b,int c,int d)
		{
		
			cout << endl << "Multiplication Is : "<< a * b * c * d ;
		}
			
		void calculate(int a,int b,int c,int d,int e)
		{
			
			cout << endl << "Division Is : "<< a / b / c / d / e ;
		}
		
};
