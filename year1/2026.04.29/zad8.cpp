#include <iostream>

using namespace std;

int main()
{
    int AB,BC,AC;
    cin>>AB>>BC>>AC;
    if (AB <= 0 or BC <= 0 or AC <= 0 ) {
        cout<<"podaj prawdizwe dane";
        return 0;
    }
    if (AB+BC>=AC) {
        cout<<"nie można zbudować trójkąta\n";
    } else if (AC+BC>=AB) {
        cout<<"nie można zbudować trójkąta\n";
    } else if (AB+AC>=BC) {
        cout<<"nie można zbudować trójkąta\n";
    } else {
        cout<<"można zbudować trójkąt\n";
    }
    return 0;
}