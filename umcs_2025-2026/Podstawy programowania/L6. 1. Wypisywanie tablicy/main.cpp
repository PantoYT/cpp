#include <iostream>
using namespace std;
int main()
{
    int n,liczba,suma=0;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>n;
    int tablica[n];
    for (int i=0;i<n;i++){
        cin>>liczba;
        suma+=liczba;
        tablica[i]=liczba;
    }
    cout<<suma<<"\n";
    for (int i=0;i<n;i++){
        cout<<tablica[i]<<"\n";
    }
    return 0;
}
