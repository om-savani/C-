#include"class1.cpp"

int main()
{
    int n;
    cout << "Enter Number Of Movies : " ;
    n = getint();

    Movie a[n];

    cout << "--INPUT MOVIE DATA --" << endl;
    for(int i = 0; i < n; i++)
    {
        a[i].setdata();
    }

    cout << "--OUTPUT MOVIE DATA --" << endl;
    for(int i = 0; i < n; i++)
    {
        a[i].getdata();
    }   
    return 0;
}