#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name;
    double age, month;
    cin >> first_name;
    cin >> age;
    month = 12;
    cout << "Hello, " << first_name << " (Months lived " << age * month <<")\n";
}