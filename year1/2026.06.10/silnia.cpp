#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,suma=1;
    cin>>n;
    while(n>0)
    {
        suma*=n;
        n--;
    }
    cout<<suma;
    return 0;
}