#include"class2.cpp"

int main()
{
    Bank_Ac x;
    int n;
    x.setdata();
    cout << "Press 1.. To debit Ammount : "<< endl ;
    cout << "Press 2.. To Display Account Details : "<< endl ;
    cout << "Press 3.. To Exit : "<< endl ;
    n = getint();

    switch(n)
    {
        case 1:
            x.Debit();
            break;
        case 2:
            x.display();
            break;
        case 3:
            cout << "You Are Exited" ;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;  
    }
    return 0;
}