#include"class.cpp"

int main()
{
	HighVal b1,b2;
	
	b1.setN();
	b2.setN();
	
	if(b1 < b2)
	{
		cout << "Maximum Number is : " << b2 << ;
	}
	else
	{
		cout << "Maximum Number is : " << b1 << ;
	}
	
	return 0;
}
