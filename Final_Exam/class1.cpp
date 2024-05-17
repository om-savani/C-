#include"myfunctions.cpp"

class Movie
{
private:
    string name,title,Genre;
    int R_year;

public:

    void setdata()
    {
        cout << "Enter Movie Name : " ;
        name = getstring(); 

        cout << "Enter Movie Title : " ;
        title = getstring();

        cout << "Enter Movie Genre : " ;
        Genre = getstring();

        cout << "Enter Movie Release Year : " ;
        R_year = getint();
        cout << endl << endl;
    }

    void getdata()
    {
        cout << endl << endl << "Movie Name : " << name << endl;
        cout << "Movie Title : " << title << endl;
        cout << "Movie Genre : " << Genre << endl;
        cout << "Movie Release Year : " << R_year << endl;
    }

};