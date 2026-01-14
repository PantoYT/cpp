#include <iostream>
using namespace std;
int main()
{
    double a,b,wynik;
    int typ;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a>>b>>typ;
    if (typ==1) {
        wynik=a+b;
        cout<<wynik;
    } else if (typ==2) {
        wynik=a-b;
        cout<<wynik;
    } else if (typ==3) {
        wynik=a*b;
        cout<<wynik;
    } else {
        if (b==0) {
            cout<<"NIEDOZWOLONE!!!\n";
        } else {
            wynik=a/b;
            cout<<wynik;
        }
    }
    return 0;
}
