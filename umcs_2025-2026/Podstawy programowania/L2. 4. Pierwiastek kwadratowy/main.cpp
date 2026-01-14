#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    float wynik;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    wynik=sqrt(a);
    cout<<wynik;
    return 0;
}
