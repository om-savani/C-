#include<iostream>
using namespace std;

class Message
{
private:
    string s1 = "Hello There ",s2;

public:
    Message()
    {
        s2 = s1;
    }

    void print()
    {
        cout << s2 << endl;
    }

    void print(string s)
    {
        cout << s2 + s << endl;
    }
};