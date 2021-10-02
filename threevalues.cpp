#include "std_lib_facilities.h"

void sortNum(double& num1, double& num2, double& num3);

int main()
{
    double f1, f2, f3;
    cout << "Enter three values\n";
    cin >> f1 >> f2 >> f3;

    sortNum(f1, f2, f3);

    cout << "The numbers in order would be " << f1 << " " << f2 << " " << f3 << "\n";
}

void sortNum(double& num1, double& num2, double& num3)
{
    
    if (num1 > num2)
    {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3)
    {
        double temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3)
    {
        double temp = num2;
        num2 = num3;
        num3 = temp;
    }

}