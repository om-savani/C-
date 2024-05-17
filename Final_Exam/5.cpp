#include"class5.cpp"

int main()
{
    Bank_Ac b1,b2,b3;

    b1.setdata();
    cout << endl << endl ;
    b2.setdata();

    b3.balance = b1.balance + b2.balance ;

    cout << endl << "Both Account Balance : " << b3.balance << endl;

    return 0;
}