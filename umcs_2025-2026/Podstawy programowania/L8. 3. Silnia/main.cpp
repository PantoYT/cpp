#include <iostream>
using namespace std;
int factorial(int n)
{
    int wynik=1;
    if (n==0) return 1;
    for (int i=1;i<=n;i++) {
        wynik*=i;
    }
    return wynik;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    factorial(5);
    return 0;
}
