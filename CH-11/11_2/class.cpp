#include "myfunctions.cpp"


class meth1
{
protected:
    int choice;
    double R,B,H;
public:
    virtual void calculate() = 0;
};

class meth2 : public meth1
{
public:
    void calculate()
    {
        setchoice();

        switch (choice) 
        {
            case 1:
                cout << endl << "Enter Radius Of Circle : " ;
                R = getDouble();
                cout << endl << "Area Of Circle = " << 3.14 * R * R << endl;
                break;
            
            case 2:
                cout << endl << "Enter Base Of Triangle : " ;
                B = getDouble();
                cout << "Enter Height Triangle : " ;
                H = getDouble();
                cout << endl << "Area Of Triangle = " << 0.5 * B * H << endl;
                break;

            case 3:
                cout << endl << "Enter Height Of Rectangle : " ;
                H = getDouble();
                cout << "Enter Width Of Rectangle : " ;
                B = getDouble();
                cout << endl << "Area Of Rectangle = " << H * B << endl;
                break;

            default:
                cout << endl << "!! Invalid Choice !!" << endl;
                break;
        }
    }

    void setchoice()
    { 
        cout << "Press 1... For Get Area Of Circle" << endl;
        cout << "Press 2... For Get Area Of Triangle" << endl;
        cout << "Press 3... For Get Area Of Rectangle" << endl;
        cout << "Enter Your Choice : " ;
        choice = getint();
    }
};

