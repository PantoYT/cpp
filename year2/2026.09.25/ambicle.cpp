#include <iostream>
using namespace std;

int sumator(int n) {
    int suma = 0;
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            suma+=i;
        }
    }
    return suma;
}

int zaprzyjaznione(int n) {
    int licznik,suma1,suma2,smol;
    licznik=suma1=suma2=smol=0;
    int i=1;
    while(licznik<n) {
        suma1 = sumator(i);
        suma2 = sumator(suma1);
        if (i == suma2 && i < suma1) {
            licznik++;
            smol = i;
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