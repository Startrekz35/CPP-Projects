#include "std_lib_facilities.h"

int main()
{
    int val1, val2;
    cout << "Enter two values\n";
    cin >> val1 >> val2;
    
    if (val1 < val2) 
    cout << val1 
    << " is smaller than " 
    << val2 <<'\n' 
    << val2 << " is larger than " << val1 << "\n";

    if (val1 > val2)
    cout << val2
    << " is smaller than " 
    << val1 <<'\n' 
    << val1 << " is larger than " << val2 << "\n";

    if (val1 == val2)
    cout << val1 << " and " << val2 << " are the same\n"; 

    cout << "Added together is (" << val1 + val2 << ")\n";
    cout << "Multiplied is (" << val1 * val2 << ")\n";
    cout << "Divided is (" << val1 / val2 << " or " << val2 / val1 << ")\n";
    cout << "Subtracted is (" << val1 - val2 << " or " << val2 - val1 << ")\n";
    cout << "Modulus is (" << val1 % 2 <<  " or " << val2 % val1 << ")\n";

}