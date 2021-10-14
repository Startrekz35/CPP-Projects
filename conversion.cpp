#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a number as a word" << endl;
    string d;
    while (cin >> d) 
    {
    if (d == "zero")
    {
        cout << "0"  << endl;
    }
    
    else if (d == "one")
    {
        cout << "1" << endl;
    }

    else if (d == "two")
    {
        cout << "2" << endl;
    }

    else if (d == "three")
    {
        cout << "3" << endl;
    }

    else if (d == "four")
    {
        cout << "4" << endl;
    }

    else if (d == "five")
    {
        cout << "5" << endl;
    }

    else if (d == "six")
    {
        cout << "6" << endl;
    }

    else if (d == "seven")
    {
        cout << "7" << endl;
    }

    else if (d == "eight")
    {
        cout << "8" << endl;
    }

    else if (d == "nine")
    {
        cout << "9" << endl;
    }

    else if (d == "ten")
    {
        cout << "10" << endl;
    }
    
    else
    {
        cout << " Not a number I know" << endl;
    }
    }
}