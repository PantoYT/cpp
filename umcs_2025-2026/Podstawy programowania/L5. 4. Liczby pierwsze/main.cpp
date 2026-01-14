#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int liczba;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>liczba;

    if (liczba<2) {
        cout<<"NIE\n";
        return 0;
    } else if (liczba==2) {
        cout<<"TAK\n";
        return 0;
    }
    for (int i=2;i<=sqrt(liczba);i++) {
        if (liczba%i==0) {
            cout<<"NIE\n";
            return 0;
        }
    }
    cout<<"TAK\n";
    return 0;
}
