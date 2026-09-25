#include <iostream>
using namespace std;

int suma_dzielnikow(int n)
{
    int suma = 0;
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            suma+=i;
        }
    }
    return suma;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, out;
    cin>>n;
    out=suma_dzielnikow(n);
    cout<<out;
    return 0;
}