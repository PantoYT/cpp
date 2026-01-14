#include <iostream>
using namespace std;
int main()
{
    int a,b;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    cin>>a;
    cin>>b;
    int wynik=a/b;
    cout<<wynik;
    return 0;
}
