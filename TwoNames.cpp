#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout << "That is the same name\n";
    if (first < second)
        cout << first << " is alphabetically before "<< second<<'\n';
    if (first > second)
        cout << first << " is alphabetically after "<< second<<'\n';
}