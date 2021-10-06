#include "std_lib_facilities.h"

void sort(string& string1, string& string2, string& string3);

int main()
{
    string f1, f2, f3;
    std::cout << "Enter three words\n";
    std::cin >> f1;
    std::cin >> f2;
    std::cin >> f3;

    sort(f1, f2, f3);

    std::cout << "The words in order would be " << f1 << " " << f2 << " " << f3 << "\n";
}

void sort(string& string1, string& string2, string& string3)
{
    
    if (string1 > string2)
    {
        string temp = string1;
        string1 = string2;
        string2 = temp;
    }

    if (string1 > string3)
    {
        string temp = string1;
        string1 = string3;
        string3 = temp;
    }

    if (string2 > string3)
    {
        string temp = string2;
        string2 = string3;
        string3 = temp;
    }

}