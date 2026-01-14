#include <iostream>
using namespace std;
struct {
    char imie[21];
    char nazwisko[21];
    int wzrost;
}osoba1,osoba2,osoba3;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    cin>>osoba1.imie>>osoba1.nazwisko>>osoba1.wzrost;
    cin>>osoba2.imie>>osoba2.nazwisko>>osoba2.wzrost;
    cin>>osoba3.imie>>osoba3.nazwisko>>osoba3.wzrost;
    if (osoba1.wzrost>=a&&osoba1.wzrost<=b) {
        cout<<osoba1.imie<<" "<<osoba1.nazwisko<<"\n";
    }
    if (osoba2.wzrost>=a&&osoba2.wzrost<=b) {
        cout<<osoba2.imie<<" "<<osoba2.nazwisko<<"\n";
    }
    if (osoba3.wzrost>=a&&osoba3.wzrost<=b) {
        cout<<osoba3.imie<<" "<<osoba3.nazwisko<<"\n";
    }
    return 0;
}
