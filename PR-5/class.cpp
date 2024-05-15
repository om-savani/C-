#include"myfunctions.cpp"

class Divide
{
private:
    int a,b;
public:
    Divide()
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
        catch(...)
        {
            cout << endl << "Cannot Divided By Zero !" << endl << endl;
        }
    }
};

class Vote
{
private:
    int age;
public:
    Vote()
    {
        cout << "Enter Your Age : " ;
        age = getint();

        try
        {
            if(age < 18)
            {
                throw 0;
            }
            else
            {
                cout << endl << "You Can Vote!" << endl;
            }
        }
        catch(int n)
        {
            cout << endl << "You Can't Vote Until " << 18 - age << " Years "<< endl << endl;
        }
    }
};