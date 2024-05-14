#include"myfunctions.cpp"

class Exception
{
private:
    int a,b,age;
    char pass[20];
public:
    void divide()
    {
        cout << "Enter First Number : " ;
        a = getint();
        cout << "Enter Second Number : " ;
        b = getint();
        
        try
        {
            if(b == 0)
            {
                throw b;
            }
            else
            {
                cout << "Result : " << a/b << endl;
            }
        }

        catch(int b)
        {
            cout << endl << "Cannot Divided By Zero !" << endl << endl;
        }
    }

    void can_vote()
    {
        cout << "Enter Your Age : " ;
        age = getint();

        try
        {
            if(age < 18)
            {
                throw age;
            }
            else
            {
                cout << endl << "You Can Vote!" << endl;
            }
        }
        catch(int age)
        {
            cout << endl << "You Can't Vote Until " << 18 - age << " Years "<< endl << endl;
        }
        
    }

    void password()
    {
        int i,count = 0;
        
        
        cout << " Enter Password : " ;
        cin >> pass;

        for(i=0;pass[i] != '\0';i++)
        {
            if(pass[i] >= 'A' && pass[i] <= 'Z')
            {
                count++;
            }
        }

        try
        {
            if(count==0)
            {
                throw count;
            }
            else
            {
                cout << " Your password is Valid " ;
            }
        }

        catch(int count)
        {
            cout << endl << "!! Password Must Contain At Least One Capital Letter !!" << endl << endl;
        }
    }
};

