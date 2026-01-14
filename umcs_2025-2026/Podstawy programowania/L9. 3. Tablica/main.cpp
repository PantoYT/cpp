#include <iostream>
using namespace std;
struct tablica {
    int tab[20];
    int ile;
};
void wypisz (tablica t,int k){
    if (k>t.ile) {
        cout<<"BLAD\n";
    } else {
        for (int i=0;i<k;i++) {
            cout<<t.tab[i]<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    tablica t;
    int n;
    cin>>n;
    t.ile=n;
    for (int i=0;i<n;i++) {
        cin>>t.tab[i];
    }
    int k;
    cin>>k;
    wypisz(t,k);
    return 0;
}
