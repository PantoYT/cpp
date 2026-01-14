#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,liczba;
    cin>>n;
    int tablica[n];
    for (int i=0;i<n;i++) {
        cin>>liczba;
        tablica[i]=liczba;
    }
    for (int pass=0;pass<n-1;pass++) {
        for(int i=0;i<n-1-pass;i++) {
            if (tablica[i]>tablica[i+1]) {
                swap(tablica[i],tablica[i+1]);
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout<<tablica[i]<<" ";
    }
    return 0;
}
