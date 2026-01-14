#include <iostream>
using namespace std;
int main()
{
    int n,liczba,mem;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>n;
    int tablica[n];
    for (int i=0;i<n;i++) {
        cin>>liczba;
        tablica[i]=liczba;
    }
    for (int i=0;i<n/2;i++) {
        swap(tablica[i], tablica[n-1-i]);
    }
    for (int i=0;i<n;i++) {
        cout<<tablica[i]<<"\n";
    }
    return 0;
}
