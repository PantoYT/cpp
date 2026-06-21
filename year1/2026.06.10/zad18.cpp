#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,suma=0,jedynki;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        jedynki = jedynki*10+1;
        suma+=jedynki;
    }
    cout<<suma;
    return 0;
}