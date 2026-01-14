#include <iostream>
using namespace std;
int even_rec(int n)
{
    if (n==0) return 0;
    if (n%2==0) return 2*even_rec(n/2)-1;
    if (n%2!=0) return 2*even_rec(n-1)+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    even_rec(7);
    return 0;
}
