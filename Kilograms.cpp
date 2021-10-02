#include "std_lib_facilities.h"

int main()
{
    double kilograms, pounds;
    cout << "Enter the amount of weight in LBS\n";
    cin >> pounds;
    kilograms = 0.453592;
    cout << "It is (" << pounds * kilograms << " Kilograms)\n";
}