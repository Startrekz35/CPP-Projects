#include "std_lib_facilities.h"

int main()
{
    double kilos, miles;
    cout << "Enter a number of miles\n";
    cin >> miles;
    kilos = 1.609;
    cout << "It is (" << miles * kilos << " Kilometers)\n";
}