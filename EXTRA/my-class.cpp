#include<iostream>
using namespace std;

class Bank
{
private:
    double balance,deposit,withdraw;

public:

    Bank_sys()
    {
        Bank x;
        int i;
        x.balance = 0;

        do
        {
            cout << endl << endl << "Press 1. For Deposite " << endl
                 << "Press 2. For Withdraw " << endl
                 << "Press 3. For Check Balance " << endl
                 << "Press 4. For Exit " << endl << endl
                 << "Enter Your Choice : " ;
             cin >> i ;

            switch (i)
            {
            case 1 :
                cout << endl <<"Enter Deposite Ammount : " ;
                cin >> x.deposit;
                x.balance += x.deposit ;
                cout << "Deposite Successful.." << endl
                     << "Current Balance : "<< x.balance << "" ;
                break;

            case 2 :
                cout << endl << "Enter Withdraw Ammount : " ;
                cin >> x.withdraw;
                x.balance -= x.withdraw ;
                cout << "Withdraw Successful.." << endl
                     << "Current Balance : "<< x.balance << "" ;
                break;

            case 3 :
                cout << endl << "Current Bank Balance : "<< x.balance << "" ;
                break;

            case 4 :
                cout << endl << "HAVE A GOOD DAY" << endl
                     << "You Are Exited..." ;
                break;
            
            default:
                cout << endl << "!! Invalid Choice !!" ;
                break;
            }
        } while (i != 4);
        
    }
};