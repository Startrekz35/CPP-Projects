#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter in two resturants";
    string resturant1, resturant2;
    cin >> resturant1 >> resturant2;
    cout << random(resturant1, resturant2);
}