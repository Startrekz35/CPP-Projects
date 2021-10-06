#include "std_lib_facilities.h"

int main()
{
    int val1;
    std::cout << "Enter a number\n";
    std::cin >> val1;

    if (val1 % 2 == 0)
    {
        std::cout << "The number " << val1 << " is even.\n";
    }
    
    else
    std::cout << "The number " << val1 << " is odd.\n";
    
}
