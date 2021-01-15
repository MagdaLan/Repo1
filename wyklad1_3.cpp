#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, surname, field;
    int index, term; 

    cout << "First name: ";
    cin >> name;

    cout << "Last name: ";
    cin >> surname;

    cout << "Index number: ";
    cin >> index;

    cout << "Term: ";
    cin >> term;

    cout << "Field of study: ";
    cin >> field;
    
    cout << "Hi " << name << " " << surname << "! Your index number is " 
      << index << ". You are on " << term << " term on " << field << endl;

    return 0;