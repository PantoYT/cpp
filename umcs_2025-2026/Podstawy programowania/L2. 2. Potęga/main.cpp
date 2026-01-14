#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,wynik;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    cin>>b;
    wynik=pow(a,b);
    cout<<wynik;
    return 0;
}
