#include"myfunctions.cpp"

class Bank_Ac
{
private:
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
        Credit();
    }
    void Credit()
    {
        cout << "Enter Credit Ammount : " ;
        credit = getDouble();
        balance += credit;
    }

    void Debit()
    {
        if(balance == 0)
        {
            cout << "Enter debit Ammount : " ;
            debit = getDouble();
            if (balance > debit)
            {
                balance -= debit;
            }
            else
            {
                cout << "Insufficient Balance" << endl;
            }
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display()
    {
        cout << "Account No : " << acc_no << endl;
        cout << "Name : " << name << endl;
        cout << "Credit : " << credit << endl;
        cout << "Debit : " << debit << endl;
        cout << "Total Balance : " << balance << endl;
    }
};