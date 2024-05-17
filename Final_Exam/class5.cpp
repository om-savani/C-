#include"myfunctions.cpp"

class Bank_Ac
{
public:
    int acc_no;
    string name;
    double balance,credit,debit;

public:

    void setdata()
    {
        cout << "Enter Account No : " ;
        acc_no = getint();
        cout << "Enter Name : " ;
        name = getstring();
        cout << "Enter Balance : " ;
        balance = getDouble();     
    }

    void getdata()
    {
        cout << "Account No : " << acc_no << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }

    Bank_Ac operator+(Bank_Ac b2)
    {
        Bank_Ac b3;
        b3.balance = balance + b2.balance;
        return b3;
    }
};