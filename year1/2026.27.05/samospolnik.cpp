#include <iostream>
using namespace std;

int main()
{
    char samo[] = {'a','e','i','o','u','y',
                   'A','E','I','O','U','Y'};
    char znak;
    while (true)
    {
        cout<<"Podaj znak: ";
        cin>>znak;
        bool znaleziono = false;

        for (char s : samo) {
            if (znak == s) {
                znaleziono = true;
                break;
            }
        }

        if (znaleziono == true) {
            cout<<"Znak jest samogloska\n";
        } else {
            cout<<"Znak jest spolgloska\n";
        }
    }
    return 0;
}