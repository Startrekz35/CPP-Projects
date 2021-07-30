#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the first name of the person you want to write to"
    <<" (Followed by pressing the enter button)\n";
    string first_name;
    cin >> first_name;
    cout << "Dear, " << first_name << "\n" 
    << " How are you? I am fine. I really miss you.\n\n";

    cout << "Give me another friend's name\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately??\n";
    char friend_sex = 0, m = 1, f = 2;
    cout << "Input your friend's sex (type m or f then press enter)\n";
    cin >> friend_sex;
    
    if (friend_sex = m) 
    cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex = f) 
    cout << "If you see " << friend_name << " please ask her to call me.\n";

    cout << "Enter" << first_name <<"'s age\n";
    int age = 0;
    cin >> age;

    if (age <= 0 || age >= 110) 
    simple_error("you're kidding!");
    
    if (age <= 12) 
    cout << "Next year you will be " << age+1 << ".\n";
    
    if (age = 17) 
    cout << "DRINKING AGE COMING SOON?!?!?!\n";
    
    if (age >= 70) 
    cout << "I hope you are enjoying retirement and staying active.\n";

    cout << "Write your full name.\n";
    string full_name;
    cin >> full_name;
    cout << "Yours sincerely, " << full_name;
}