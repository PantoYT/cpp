#include <iostream>

using namespace std;

int main()
{
    int wynik,ocena;
    cin>>wynik>>ocena;
    if (wynik>90 or ocena >= 5) {
        cout<<"grupa zaawansowana\n";
    } else {
        cout<<"grupa podstawowa\n";
    }
    return 0;
}