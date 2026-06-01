#include <iostream>

using namespace std;

int main()
{
    int f=0;
    double so=0;
    cin>>f>>so;
    if (f > 94 && so >= 4.2) {
        cout<<"nagroda";
    } else {
        cout<<"brak nagrody";
    }
    return 0;
}