#include <iostream>
#include <vector>
using namespace std;

int suma_dziel_wlasc(int n) {
    int suma = 0;

    for (int i=1;i<n;i++) {
        if (n%i==0) {
            suma+=i;
        }
    }

    return suma;
}

int zaprzyjaznione(int n) {
    int i = 1;
    int licznik = 0;
    int smol = 0;

    while (licznik < n) {
        int suma1 = suma_dziel_wlasc(i);
        if (i < suma1) {
            int suma2 = suma_dziel_wlasc(suma1);

            if (suma2 == i) {
                licznik++;
                smol = i;
            }
        }
        i++;
    }
    return smol;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;

    cout<<zaprzyjaznione(n);
    return 0;
}