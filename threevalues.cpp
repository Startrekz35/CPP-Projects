#include "std_lib_facilities.h"

int main()
{
    int val1, val2, val3;
    cout << "Enter three values\n";
    cin >> val1 >> val2 >> val3;

    if (val1 < val2 < val3)
    {
    cout << val1 << " " << val2 << " " << val3 << "\n";
    }
    
    if (val2 < val1 < val3)
    {
    cout << val2 << " " << val2 << " " << val3 << "\n";
    }
    
    if (val3 < val2 < val1)
    {
    cout << val3 << " " << val2 << " " << val1 << "\n";
    }
    
    if (/* condition */)
    {
        /* code */
    }
    
}