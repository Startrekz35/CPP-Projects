#include "std_lib_facilities.h"

int main()
{
    int val1, val2;
    double val3;
    val3 = val1 + val2;
    cout << "Enter two values\n";
    cin >> val1 >> val2;
    
    if (val1 < val2) 
    cout << val1 
    << " is smaller than " 
    << val2 <<'\n' 
    << val2 << " is larger than " << val1;

    if (val1 > val2)
    cout << val2
    << " is smaller than " 
    << val1 <<'\n' 
    << val1 << " is larger than " << val2;

    cout << val3 << '\n' 
    << val4 << '\n' 
    << val5 << "\n" 
    << val6;

}