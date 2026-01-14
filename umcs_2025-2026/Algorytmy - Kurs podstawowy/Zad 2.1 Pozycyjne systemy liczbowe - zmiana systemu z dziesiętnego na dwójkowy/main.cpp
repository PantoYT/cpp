#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int liczba;
    cin>>liczba;
    string wynik,tekst;
    if (liczba==0) {
        cout<<0;
        return 0;
    }
    while (liczba!=0) {
        tekst=to_string(liczba%2);
        wynik=tekst+wynik;
        liczba/=2;
    }
    cout<<wynik;
    return 0;
}
