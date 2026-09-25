#include <iostream>
using namespace std;

void dzielniki_wlasciwe(int n)
{
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            cout<<i<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    dzielniki_wlasciwe(n);
    return 0;
}