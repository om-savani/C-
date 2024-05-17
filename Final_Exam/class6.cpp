#include"myfunctions.cpp"

class MathOperation
{
private:
    double a, b;

public:
    MathOperation()
    {
        cout << "Enter First Number : ";
        a = getint();
        cout << "Enter Second Number : ";
        b = getint();

        try
        {
            if (b != 0)
            {
                cout << "Division : "<< a/b ;
            }
            else
            {
                throw 0;
            }
        }

        catch(int n)
        {
            cout << "Error" << endl;
        }
    }
};