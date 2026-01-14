#include <iostream>
using namespace std;
int main()
{
    int n,liczba;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>n;
    int tablica[n];
    for (int i=0;i<n;i++) {
        cin>>liczba;
        tablica[i]=liczba;
    }
    for (int i=0;i<n;i++) {
        if (tablica[i]>=liczba) {
            cout<<"1\n";
        } else {
            cout<<"0\n";
        }
    }
    return 0;
}
