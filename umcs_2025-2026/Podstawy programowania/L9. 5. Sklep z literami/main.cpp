#include <iostream>
using namespace std;
struct litera{
    char znak;
    int stan;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n,m;
    cin>>n;
    litera sklep[n];
    for (int i=0;i<n;i++) {
        cin>>sklep[i].znak>>sklep[i].stan;
    }
    cin>>m;
    for (int i=0;i<m;i++) {
        char sprzedana;
        cin>>sprzedana;
        for (int j=0;j<n;j++){
            if (sklep[j].znak==sprzedana) {
                if (sklep[j].stan > 0) {
                    sklep[j].stan-=1;
                }
                break;
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout<<sklep[i].znak<<" "<<sklep[i].stan<<"\n";
    }
    return 0;
}
