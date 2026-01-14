#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,liczba,suma=0;
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
        suma+=tablica[i];
    }
    double srednia=suma/(double)n;
    int najbliz=tablica[0];
    int dystans=abs(tablica[0]-srednia);
    for (int i=0;i<n;i++) {
        if (dystans>abs(tablica[i]-srednia)) {
            najbliz=tablica[i];
            dystans = abs(tablica[i]-srednia);
        }
    }
    cout<<najbliz;
    return 0;
}
