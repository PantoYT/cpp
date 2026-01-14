#include <iostream>
using namespace std;
int main()
{
    int a,liczba1=0,liczba0=0;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    cout<<"0 0\n";
    while (true) {
        if (liczba1==a && liczba0==a) {
            break;
        } else if (liczba0<a){
            liczba0+=1;
            cout<<liczba1<<" "<<liczba0<<"\n";
        } else if (liczba0==a){
            liczba0=0;
            liczba1+=1;
            cout<<liczba1<<" "<<liczba0<<"\n";
            }
        }
    return 0;
}
