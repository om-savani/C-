#include "my-class.cpp"

int main()
{

    int s_qty, d_import, d_export, id, n, i = 0, j;
    double revenue;
    string name, ceo;
    cout << "Enter the number of Companies : ";
    cin >> n;

    for (j = 0; j < n; j++)
    {
        cout << endl
             << endl
             << "Enter Company " << i + 1 << " Data" << endl
             << endl;
        cout << "Enter Company Name : ";
        cin >> name;
        cout << "Enter Staff Quantity : ";
        cin >> s_qty;
        cout << "Enter Company Revenue(per year) : ";
        cin >> revenue;
        cout << "Enter Import Raw Diamonds(per year) : ";
        cin >> d_import;
        cout << "Enter Export Raw Diamonds(per year) : ";
        cin >> d_export;
        cout << "Enter Company CEO Name : ";
        cin >> ceo;

        Cmp x(name,s_qty,revenue,d_import,d_export,ceo);        
    }
    

    return 0;
}