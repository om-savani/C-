#include"myfunctions.cpp"

class Vehicle
{
protected:
    string model;
    int speed;

public:
    
    void setdata()
    {
        cout<<"Enter the model of the vehicle: ";
        model = getstring();
        cout<<"Enter the speed of the vehicle: ";
        speed = getint();
    }

    void getdata()
    {
        cout<<"The model of the vehicle is: "<<model<<endl;
        cout<<"The speed of the vehicle is: "<<speed<<endl;
    }
};

class Car : public Vehicle
{
public:
    int distance;
    double time;

    void Distance()
    {
        cout << "Enter Car Data " << endl << endl;
        setdata();
        cout << "Enter the distance(Kilometers) travelled by the car: ";
        distance = getint();
        time = (distance / speed) * 60;
        cout << endl << endl;
        getdata();
        cout << "Time to travel " << distance << " Kilometers Is : " << time << " Minuts" <<  endl;
    }
};

class Bike : public Vehicle
{
public:
    int distance;
    double time;

    void Bdistance()
    {
        cout << "Enter Bike Data " << endl << endl;
        setdata();
        cout << "Enter the distance(Kilometers) travelled by the car: ";
        distance = getint();
        time = (distance / speed) * 60;
        cout << endl << endl;
        getdata();
        cout << "Time to travel " << distance << " Kilometers Is : " << time << " Minuts" <<  endl;
    }
};
