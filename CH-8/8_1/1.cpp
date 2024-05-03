#include"class1.cpp"

int main()
{
	char x;

	
	cout << "Press +.. For Addition" << endl ;
	cout << "Press -.. For Subtraction" << endl ;
	cout << "Press *.. For Multiplication" << endl ;
	cout << "Press /.. For Division" << endl ;
	cout << "Enter Your Choice : " ;
	cin >> x ;
	
	Operation n;
	
	switch(x)
		{
			case '+':
				cout << endl << "Enter First Number : " ;
				cin >> n.a ;
				cout << "Enter Second Number : " ;
				cin >> n.b ;
				n.calculate(n.a,n.b);
				break;
			
			case '-':
				cout << endl << "Enter First Number : " ;
				cin >> n.a ;
				cout << "Enter Second Number : " ;
				cin >> n.b ;
				cout << "Enter Third Number : " ;
				cin >>n.c ;
				n.calculate(n.a,n.b,n.c);
				break;
				
			case '*':
				cout << endl << "Enter First Number : " ;
				cin >> n.a ;
				cout << "Enter Second Number : " ;
				cin >> n.b ;
				cout << "Enter Third Number : " ;
				cin >> n.c ;
				cout << "Enter Fourth Number : " ;
				cin >> n.d ;
				n.calculate(n.a,n.b,n.c,n.d);
				break;
				
			case '/':
				cout << endl << "Enter First Number : " ;
				cin >> n.a ;
				cout << "Enter Second Number : " ;
				cin >> n.b ;
				cout << "Enter Third Number : " ;
				cin >> n.c ;
				cout << "Enter Fourth Number : " ;
				cin >>n.d ;
				cout << "Enter Fifth Number : " ;
				cin >> n.e ;
				n.calculate(n.a,n.b,n.c,n.d,n.e);
				break;
				
			default :
				cout << "Invalid Input " ;
		}
	
	return 0;
}
