#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the first name of the person you want to write to"
    <<" (Followed by pressing the enter button)\n";
    string first_name;
    cin >> first_name;
    cout << "Dear, " << first_name << "\n" 
    << " How are you? I am fine. I really miss you.\n\n";

    cout << "Give me another friend's name\n\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately??\n\n";
    char friend_sex = 0, m, f;
    cout << "Input your friend's sex (type m or f then press enter)\n";
    cin >> friend_sex;

    if (friend_sex == 'm') 
    cout << "If you see " << friend_name << " please ask him to call me.\n\n";
    else if (friend_sex == 'f') 
    cout << "If you see " << friend_name << " please ask her to call me.\n\n";

    cout << "Enter " << first_name <<"'s age\n";
    int age = 0;
    cin >> age;

    if (age <= 0 || age >= 110) 
    simple_error("you're kidding!");
    
    if (age <= 12) 
    cout << "Next year you will be " << age+1 << ".\n";
    
    if (age == 17) 
    cout << "DRINKING AGE COMING SOON?!?!?!\n";
    
    if (age >= 70) 
    cout << "I hope you are enjoying retirement and staying active.\n";

    cout << "Write your first name.\n";
    string your_first, your_last;
    cin >> your_first;
    cout << "Now your last name.\n";
    cin >> your_last;
    string full_name = your_first + " " + your_last; 
    cout << "Yours sincerely, " << full_name << "\n";
}