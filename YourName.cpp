#include "std_lib_facilities.h"

int main()
{
   cout << "Please enter your first and last name (followed by 'enter'):\n";
   string first_name; 
   string last_name;  //first_name is a variable of type string
   cin >> first_name >> last_name; 
   string name = first_name + ' ' + last_name;//read characters into first_name
   cout << "Hello, " << name <<"!\n";
   cout << "What's your date of birth? (Type out the Month by name followed by numerical values for the day and year ex. January 1 1900 and press 'enter'):\n";
   string Month; 
   int Day, Year;
   cin >> Month; 
   cin >> Day; 
   cin >> Year;
   cout << "Awesome! So your name is" << " "<< name << " " << "and your date of birth is "<< Month <<" " << Day << ", " << Year << ", " << "right?\n";
}