#include <iostream>
using namespace std;
int main()
{
    int n,k,liczba;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>n;
    int tablica[n+1];
    for (int i=0;i<n;i++) {
        cin>>liczba;
        tablica[i]=liczba;
    }
    cin>>k;
    cout<<tablica[k-1];
    return 0;
}
