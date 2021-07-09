#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value:";
    double n;
    int d;
    cin >> n;
    d = n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times = " << 3*n
    << "\nn squared == " << n*n
    << "\nnhalf of n == " << n/2
    << "\nsquare root of n " << sqrt(n)
    << "\nremainder of d " << d%15
    <<'\n';

}