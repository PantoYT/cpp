#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string liczba;
    cin>>liczba;
    int wynik=0,potega=1;
    for(int i = liczba.length() - 1; i >= 0; i--) {
        int cyfra = liczba[i] - '0';
        wynik += cyfra * potega;
        potega *= 3;
    }
    cout<<wynik;
    return 0;
}
